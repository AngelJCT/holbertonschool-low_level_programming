/**
 *op_add-function to sum integers
 *@a: first integer
 *@b: second integer
 *Return: sum of integers
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
 *op_sub-function to substract integers
 *@a: first integer
 *@b: second integer
 *Return: substraction of integers
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 *op_mul-function to multiply integers
 *@a: first integer
 *@b: second integer
 *Return: multiplication  of integers
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 *op_div-function to divide integers
 *@a: first integer
 *@b: second integer
 *Return: division of integers
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 *op_mod-function to print the remainder of integers
 *@a: first integer
 *@b: second integer
 *Return: modulation of integers
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
