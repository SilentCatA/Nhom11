//int main()
//{
//    int a, b = 2019;
//	cout << "nhap nam sinh cua ban :\n";
//	cin >> a;
//	cout << "tuoi cua ban la:" << b - a << endl;
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	char a;
//	cout << "> ";
//	cin >> a;
//	a = toupper(a);
//	cout << char(a) << endl;
//	system("pause");
//
//
//}

int main()
{
    int tien;
	cout << "nhap tien: ";
	cin >> tien; 
	int menhgia[6] = { 500000,200000,100000,50000,20000,10000  };
	int ls_tien[6] = { 0,0,0,0,0,0  };
	for (int i = 0; i < 6; i++)
	{
		while (tien >= menhgia[i])
		{
			ls_tien[i]++;
			tien = tien - menhgia[i];
		
		}
		cout << "so to " << menhgia[i] << " la: " << ls_tien[i] << endl;
	
	}
	
	system("pause");
	return 0;	

}
