map<char,char> mp ;
void Map(){
	mp['1'] = '`' ,mp['2'] = '1' , mp['3']='2', mp['4'] = '3' ,mp['5'] = '4' , mp['6']='5'
	,mp['7'] = '6' , mp['8']='7', mp['9'] = '8' ,mp['0'] = '9' , mp['-']='0' , mp['='] = '-' ;

	mp['W'] = 'Q' ,mp['E'] = 'W' , mp['R']='E', mp['T'] = 'R' ,mp['Y'] = 'T' , mp['U']='Y'
	,mp['I'] = 'U' , mp['O']='I', mp['P'] = 'O' ,mp['['] = 'P' , mp[']']='[' , mp['\\'] = ']'  ;

 	mp['S'] = 'A' ,mp['D'] = 'S' , mp['F']='D', mp['G'] = 'F' ,mp['H'] = 'G' , mp['J']='H'
	,mp['K'] = 'J' , mp['L']='K', mp[';'] = 'L' ;

	/*** important ***/
	mp['\''] = ';' ;

 	mp['X'] = 'Z' ,mp['C'] = 'X' , mp['V']='C', mp['B'] = 'V' ,mp['N'] = 'B' , mp['M']='N'
	,mp[','] = 'M' , mp['.']=',', mp['/'] = '.' ;

	mp['\n'] = '\n',mp[' '] = ' ' ;



}


int main()
{
	Map() ;
	string str;
	while(getline(cin,str)){
    	for(int i=0 ; i<str.size() ; i++){
        	printf("%c",mp[str[i]]) ;
    	}
    	printf("\n") ;

	}

	return 0;
}
