Your task is to develop a program to compute the balance of a bank account. The program will have to process transactions (deposit/withdraw) and will compute account balance with respect to the given interest rates.

We assume the bank denominates the account in Czech crowns (CZK). The bank allows its clients to deposit/withdraw money, however, at most one transaction may be done in a single day. Moreover, the bank is very friendly, it offers unlimited debet. Available balance is subject to credit interest rate, negative balance is subject to debet interest rate. The two interest rates may be different. The interest is computed every day. The credit/debet is always expressed in crowns and hallers (1/100 CZK). No fractions of hallers are allowed. All fractions are rounded to smaller absolute value (towards zero), i.e. credit/debet interest of 1.3499 CZK will be accounted as 1.34 CZK. The interest applies to the balance present at midnight, i.e., a transaction in a given day applies to the interest the next day.

The input of your program are the two interest rates in the form of two decimal numbers. The values represent daily credit and debet interest rate in percents. Then, a list of transactions is in the input. Each transaction consists of two numbers: a day number and an amount. The transactions are sorted in the input, i.e., the day numbers form an increasing serie. A positive amount means a deposit, a negative number is a withdrawal. A zero amount means a cancellation of the account. The program will display the final balance and quits upon account cancellation.

The output of the program is the balance at the moment of the account is cancelled. The format of the output is shown in the sample run below. Do not forget newline after the output.

If the input is invalid (e.g. input values are not decimal numbers, are negative, or inconsistent), the program detects the problem and prints an error message. The format of the error message is again shown below. The following is considered invalid input:

non-numeric value,
invalid transaction order, i.e. the day numbers do not form an increasing serie, or
the separator (comma) is missing in the transaction description.

If the program detects an error, it immediately stops asking for further input data, it prints out the error message and terminates. Thus, the program must validate input data as it reads them. Do not postpone the checks until the entire input is read. The error message shall be printed on the standard output (do not send it to the standard error output).

Example runs of the program:

Enter credit interest rate [%]:
0.01
Enter debet interest rate [%]:
0.1
Enter transactions:
0, 20000
45, -5000
100, 10000
120, 0
Balance: 25223.27

Enter credit interest rate [%]:
0.02
Enter debet interest rate [%]:
0.4
Enter transactions:
10, 20000
25, -15000
45, -10000
70, 5000
100, 0
Balance: -491.27

Enter credit interest rate [%]:
abcd
Invalid input.

Enter credit interest rate [%]:
0.02
Enter debet interest rate [%]:
0.3
Enter transactions:
5, 2000
0, 3000
Invalid input.