FROM ubuntu:14.04
MAINTAINER julin shan <sjulin@qq.com>

# Enable PPA
RUN apt-get update && apt-get install -y software-properties-common && add-apt-repository -y ppa:ubuntu-toolchain-r/test

# Install pre-reqs
RUN apt-get update && apt-get install -y \
 build-essential \
 gcc-4.8 \
 g++-4.8 \
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
 libxmu-dev \
 libxi-dev \
 libxt-dev \
 qt5-default libqt5x11extras5-dev qttools5-dev

RUN apt-get clean && rm -rf /var/lib/apt/lists/*
RUN cd /usr/bin && ln -s python2.7 python

RUN ln -s /usr/bin/g++-4.8 /usr/bin/g++ -f && ln -s /usr/bin/gcc-4.8 /usr/bin/gcc -f

copy ./3rd /app/meshright/3rd
RUN cd /app/meshright/3rd && tar -zxvf VTK-7.1.1.tar.gz && tar -zxvf opencascade-7.1.0.tar.gz && rm -f VTK-7.1.1.tar.gz && rm -f opencascade-7.1.0.tar.gz
RUN cd /app/meshright/3rd/VTK-7.1.1 && mkdir output
RUN cd /app/meshright/3rd/VTK-7.1.1/output && cmake \
-DCMAKE_BUILD_TYPE:STRING=Release -DBUILD_TESTING:BOOL=OFF -DBUILD_SHARED_LIBS:BOOL=ON -DBUILD_EXAMPLES:BOOL=OFF ../ && make -j4

ENV DIR_3RDPARTY=/app/meshright/3rd

