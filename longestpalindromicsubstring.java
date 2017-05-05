	public static void longestPalindromicSubstring(String str,int len){
		char[] s = str.toCharArray();
		// not optimised for spatial cache access.
		int ispalin[][] = new int[len][len];
		int startidx= -1,endidx = -1,ans = -1;
		for(int i = 0; i < len ; i++){
			for(int j = 0; i+j < len ; j++){
				if(i == 0){
					ispalin[j][(i+j)] = 1;
					if(i> ans){
						ans = i;
						startidx = j;
						endidx = i+j;
					}
				}
				else if((ispalin[j+1][(i+j-1)] == 1 || (i == 1)) && s[j] == s[i+j]){
					ispalin[j][(i+j)] = 1;
					if(i > ans){
						ans = i;
						startidx = j;
						endidx = i+j;
					}
				}

			}
		}
		return str.substring(startidx,endidx+1);
	}
