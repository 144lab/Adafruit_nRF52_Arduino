from alpine

RUN apk add -U git tar make
ARG NAME=144lab-nrf52-0.14.6
RUN git clone https://github.com/144lab/Adafruit_nRF52_Arduino $NAME
RUN find $NAME -name "._*" -delete
RUN tar cvj --exclude='.git' --exclude='._*' -f $NAME.tar.bz2 $NAME
