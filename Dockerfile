FROM debian:10

RUN apt update && apt upgrade -y
RUN apt install -y binutils gcc gdb xxd make automake gcc git vim strace
ENV WORKDIR /root
WORKDIR $WORKDIR
COPY . $WORKDIR
