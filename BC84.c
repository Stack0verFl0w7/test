int main(){
	int a = 0;
	double c = 0;
	scanf("%d", &a);
	for (int b = 1; b <= a; b++){
		c = 1.0 / b + c;
	}
	printf("%.6lf", c);
	return 0;
}
