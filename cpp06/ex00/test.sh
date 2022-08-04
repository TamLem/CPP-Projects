for input in 0 "  " 42.0 42.0f 42..0f .42f nan nanf inf inff
do
	echo input $input
	echo -----------
	./cast $input
	echo ------------------------------------------
done