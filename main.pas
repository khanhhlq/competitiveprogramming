program Ud1;
Uses cRT;
Var a,N:Integer;
    S:Real;
Begin
clrscr;
write('Nhap gia tri cua a=');readln(a);
S:=1/a;N:=1;
While 1/(a+N)>=0.0001 Do
   Begin
     S:=S+1/(a+N);
     N:=N+1;
   End;
   Writeln('gia tri cua tong S =',S:8:3);
   readln;
end.