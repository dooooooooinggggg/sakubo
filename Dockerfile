FROM debian:10

RUN apt update && apt upgrade -y
RUN apt install -y gcc gdb

ENV WORKDIR /work
WORKDIR $WORKDIR
COPY . $WORKDIR
