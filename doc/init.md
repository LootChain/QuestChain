Sample init scripts and service configuration for questchaind
==========================================================

Sample scripts and configuration files for systemd, Upstart and OpenRC
can be found in the contrib/init folder.

    contrib/init/questchaind.service:    systemd service unit configuration
    contrib/init/questchaind.openrc:     OpenRC compatible SysV style init script
    contrib/init/questchaind.openrcconf: OpenRC conf.d file
    contrib/init/questchaind.conf:       Upstart service configuration file
    contrib/init/questchaind.init:       CentOS compatible SysV style init script

Service User
---------------------------------

All three Linux startup configurations assume the existence of a "questchaincore" user
and group.  They must be created before attempting to use these scripts.
The OS X configuration assumes questchaind will be set up for the current user.

Configuration
---------------------------------

At a bare minimum, questchaind requires that the rpcpassword setting be set
when running as a daemon.  If the configuration file does not exist or this
setting is not set, questchaind will shutdown promptly after startup.

This password does not have to be remembered or typed as it is mostly used
as a fixed token that questchaind and client programs read from the configuration
file, however it is recommended that a strong and secure password be used
as this password is security critical to securing the wallet should the
wallet be enabled.

If questchaind is run with the "-server" flag (set by default), and no rpcpassword is set,
it will use a special cookie file for authentication. The cookie is generated with random
content when the daemon starts, and deleted when it exits. Read access to this file
controls who can access it through RPC.

By default the cookie is stored in the data directory, but it's location can be overridden
with the option '-rpccookiefile'.

This allows for running questchaind without having to do any manual configuration.

`conf`, `pid`, and `wallet` accept relative paths which are interpreted as
relative to the data directory. `wallet` *only* supports relative paths.

For an example configuration file that describes the configuration settings,
see `contrib/debian/examples/questchain.conf`.

Paths
---------------------------------

### Linux

All three configurations assume several paths that might need to be adjusted.

Binary:              `/usr/bin/questchaind`  
Configuration file:  `/etc/questchaincore/questchain.conf`  
Data directory:      `/var/lib/questchaind`  
PID file:            `/var/run/questchaind/questchaind.pid` (OpenRC and Upstart) or `/var/lib/questchaind/questchaind.pid` (systemd)  
Lock file:           `/var/lock/subsys/questchaind` (CentOS)  

The configuration file, PID directory (if applicable) and data directory
should all be owned by the questchaincore user and group.  It is advised for security
reasons to make the configuration file and data directory only readable by the
questchaincore user and group.  Access to questchain-cli and other questchaind rpc clients
can then be controlled by group membership.

### Mac OS X

Binary:              `/usr/local/bin/questchaind`  
Configuration file:  `~/Library/Application Support/QuestChainCore/questchain.conf`  
Data directory:      `~/Library/Application Support/QuestChainCore`  
Lock file:           `~/Library/Application Support/QuestChainCore/.lock`  

Installing Service Configuration
-----------------------------------

### systemd

Installing this .service file consists of just copying it to
/usr/lib/systemd/system directory, followed by the command
`systemctl daemon-reload` in order to update running systemd configuration.

To test, run `systemctl start questchaind` and to enable for system startup run
`systemctl enable questchaind`

### OpenRC

Rename questchaind.openrc to questchaind and drop it in /etc/init.d.  Double
check ownership and permissions and make it executable.  Test it with
`/etc/init.d/questchaind start` and configure it to run on startup with
`rc-update add questchaind`

### Upstart (for Debian/Ubuntu based distributions)

Drop questchaind.conf in /etc/init.  Test by running `service questchaind start`
it will automatically start on reboot.

NOTE: This script is incompatible with CentOS 5 and Amazon Linux 2014 as they
use old versions of Upstart and do not supply the start-stop-daemon utility.

### CentOS

Copy questchaind.init to /etc/init.d/questchaind. Test by running `service questchaind start`.

Using this script, you can adjust the path and flags to the questchaind program by
setting the PRIVD and FLAGS environment variables in the file
/etc/sysconfig/questchaind. You can also use the DAEMONOPTS environment variable here.

### Mac OS X

Copy org.questchain.questchaind.plist into ~/Library/LaunchAgents. Load the launch agent by
running `launchctl load ~/Library/LaunchAgents/org.questchain.questchaind.plist`.

This Launch Agent will cause questchaind to start whenever the user logs in.

NOTE: This approach is intended for those wanting to run questchaind as the current user.
You will need to modify org.questchain.questchaind.plist if you intend to use it as a
Launch Daemon with a dedicated questchaincore user.

Auto-respawn
-----------------------------------

Auto respawning is currently only configured for Upstart and systemd.
Reasonable defaults have been chosen but YMMV.
