#!/bin/sh

case "$1" in
    start)
        cpupower frequency-set --governor performance
        ;;
    stop)
        cpupower frequency-set --governor powersave
        ;;
    *)
        echo "Usage: $0 {start|stop}"
        exit 1
esac

exit 0
