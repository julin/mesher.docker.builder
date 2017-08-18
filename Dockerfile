FROM ubuntu:14.04
MAINTAINER julin shan <sjulin@qq.com>

# Enable PPA
RUN apt-get update && apt-get install -y software-properties-common && add-apt-repository -y ppa:ubuntu-toolchain-r/test

# Install pre-reqs
RUN apt-get update && apt-get install -y \
 build-essential \
 git \
 wget \
 ninja-build \
 python2.7 \
 python2.7-dev \
 python3.4 \
 python3.4-dev \
 python3-sip \
 python3-sip-dev \
 cmake cmake-curses-gui \
 libbz2-dev \
 zlib1g-dev \
 libxt-dev \
 qt5-default libqt5x11extras5-dev qttools5-dev
RUN cd /usr/bin && ln -s python2.7 python

ENV DIR_3RDPARTY=/app/meshright/3rd

WORKDIR /app/meshright/3rd
copy ./3rd /app/meshright/3rd


