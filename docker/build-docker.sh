#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-questchainpay/questchaind-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/questchaind docker/bin/
cp $BUILD_DIR/src/questchain-cli docker/bin/
cp $BUILD_DIR/src/questchain-tx docker/bin/
strip docker/bin/questchaind
strip docker/bin/questchain-cli
strip docker/bin/questchain-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
