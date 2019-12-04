FROM debian:10

RUN apt update && apt upgrade -y
RUN apt install -y binutils gcc gdb xxd

ENV WORKDIR /work
WORKDIR $WORKDIR
COPY . $WORKDIR
