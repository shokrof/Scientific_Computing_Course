if [ "$1" == "-help" ] 
then
 echo  "./plot.sh <True data> <sample data>"
 exit 0
fi
True_data=$1
Out_data=$2

gnuplot  << __EOF
set autoscale
plot '$True_data' with lines ,'$Out_data' with lines 

pause 100 "press Ctrl-D to exit"

__EOF
