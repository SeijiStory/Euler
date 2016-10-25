int main(int argc, char **argv)
{
    const unsigned int MAX = 1000U;
    unsigned int i;
    unsigned int sum = 0;
    for (i = 0; i < MAX; ++i)
	sum += (i % 5 == 0 || i % 3 == 0) ? i : 0;
    return sum;
}
