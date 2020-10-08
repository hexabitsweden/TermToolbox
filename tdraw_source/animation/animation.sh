
pauser () {
	sleep 1
	main 
}

main () {
sh 1.sh
sleep 1
sh 2.sh
sleep 2
sh 3.sh
sleep 1
sh 4.sh
sleep 1
sh 3.sh
sleep 1
sh 4.sh
sleep 1
pauser
}


main
