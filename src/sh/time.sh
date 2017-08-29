#! /bin/bash  
#filename: test.sh  


# arg1=start, arg2=end, format: %s.%N  
function getTiming() {  
start=$1  
end=$2  

start_s=$(echo $start | cut -d '.' -f 1)  
start_ns=$(echo $start | cut -d '.' -f 2)  
end_s=$(echo $end | cut -d '.' -f 1)  
end_ns=$(echo $end | cut -d '.' -f 2)  


# for debug..  
#    echo $start  
#    echo $end


start1=$(date +%s.%N)  
start_s=$(echo $start1 | cut -d '.' -f 1)  
start_ns=$(echo $start1 | cut -d '.' -f 2)  
end_s=$(strt_s)
end_ns=$(start_ns)
time=0
while true
do
    #    echo $time

    while true
    do 
        end=$(date +%s.%N)  
#        end_s=$(echo $end | cut -d '.' -f 1)  
#        end_ns=$(echo $end | cut -d '.' -f 2)  
#        time=$(( ( 10#$end_s - 10#$start_s  ) * 1000 + ( 10#$end_ns / 1000000 - 10#$start_ns / 1000000  )  ))  
        echo $end
#        start_s=$end_s
#        start_ns=$end_ns 

        #        if [ $time -le 5 ];then
        #
        #       else
        #          break
        #     fi
    done
done
}  



#    echo "This is only a test to get a ms level time duration..."  
start=$(date +%s.%N)  
#ls >& /dev/null    # hey, be quite, do not output to console....  
end=$(date +%s.%N)  

getTiming $start $end  

