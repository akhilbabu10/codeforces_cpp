/*
 * 365.cxx
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{	long long int n,k,i,t,c=0;
	cin >> n >> k;
	set<char> a;
	string s;
	for(i=0;i<n;i++){
		cin >> s;
		for(t=0;t<s.length();t++)
			if(s[t]-'0'<=k)
				a.insert(s[t]-'0');
		if((a.size())==k+1)
			c++;
		a.clear();
	}
	cout << c;	
		
	
	
	return 0;
}

