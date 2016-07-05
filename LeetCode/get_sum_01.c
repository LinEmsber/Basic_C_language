int get_sum(int a, int b)
{

	if (b)
		return get_sum(a ^ b, (a & b) << 1);
	else
		return a;
}
