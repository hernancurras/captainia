stty -F /dev/ttyUSB0 38400
echo "/dev/ttyUSB0 set to 38400bps"
killall gpsd
gpsd -n -N -D5 /dev/ttyUSB0 -F /var/run/gpsd.sock
echo "gspd starting..."
#cat /dev/ttyUSB0 | grep GPGGA
