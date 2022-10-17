int Kiemtrakitudiem(float s[]) {
int i,ok;
for(i=0; i<strlen(s); i++) {
if(s[i] >= 'a' && s[i] <= 'z') {
ok = 1;
} else {
ok = 0;
break;
}

}return ok;
}
