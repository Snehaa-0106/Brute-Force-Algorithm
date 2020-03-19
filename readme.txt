

Line 1 : Programmed in C Language


Line 2 : On the whole, its 3 steps to get results from my program as shown below:

	$ make         -->ENTER
	$ ./program1   -->ENTER
	program1 -m market.txt -p price.txt



NOTE : """"ITS EXPLAINED BELOW""""




Files used in my code are as listed below:
	 
	 Input File  : market.txt , price.txt
	 Output File : Output.txt

	 Note : Program will work for any input files of the given format.





Line 3: In the command prompt,the below steps have to be followed for successful execution   

	Step1 : $ make 
		(I have created make file and it contains the command:
			gcc snehaa.c -o program1)

	Step2 : $./program1
		(This is to run my code)

	Step3 : Immediately after step2, you can enter command for invoking the program.
		 Program1 -m market.txt -p price.txt


Note : You could also give your own file for testing purposes. The format to run them is:

	program1 -m <market-price-file> -p <price-list-file>
				




		




