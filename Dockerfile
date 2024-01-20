FROM ubuntu:22.04

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y tzdata
RUN apt-get install -y vim build-essential git cmake net-tools gdb clang python3 python3-pip

RUN groupadd -r developer && useradd -m -r -g developer -s /bin/bash developer
RUN mkdir -p /work/cpp_sample 
RUN chown developer:developer /work/cpp_sample

USER developer

COPY requirements.txt ./
RUN pip3 install --no-cache-dir -r requirements.txt

WORKDIR /work/cpp_sample