i=1
modulo=0



 for ((i;i<=99;i++))
 do
	 
	modulo=$((i % 2 ))

	if [[ modulo -ne 0 ]]; then 
		echo "$i"	
		
	else
		continue	
		echo "no es primo"
	fi

done 


 
