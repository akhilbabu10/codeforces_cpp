/*
 * 1.cxx
 * 
 * Copyright 2019 hp <hp@hp-HP-ProBook-4530s>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the1 1 GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{	long long int n,m,a;
	cin >> n >> m >> a;
	if(n%a==0 && m%a==0)
		cout << (n/a)*(m/a);
	else if(n%a==0 && m%a!=0)
		cout << (n/a)*(m/a + 1);
	else if(n%a!=0 && m%a==0)
		cout << (n/a +1)*(m/a);
	else 
		cout << (n/a +1)*(m/a +1);
		
	
	return 0;
}

