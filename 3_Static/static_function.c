static int increase()
{
	static int a=0;
	a++;
	return a;
}
void increate_call()
{
	increase();
}
