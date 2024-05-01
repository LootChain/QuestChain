FROM debian:stretch
LABEL maintainer="QuestChain Developers <dev@questchain.org>"
LABEL description="Dockerised QuestChainCore, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
