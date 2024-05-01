
Debian
====================
This directory contains files used to package questchaind/questchain-qt
for Debian-based Linux systems. If you compile questchaind/questchain-qt yourself, there are some useful files here.

## questchain: URI support ##


questchain-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install questchain-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your questchain-qt binary to `/usr/bin`
and the `../../share/pixmaps/questchain128.png` to `/usr/share/pixmaps`

questchain-qt.protocol (KDE)

