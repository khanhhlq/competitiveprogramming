uses crt;
var a:array[1..100,1..100] of integer;
var m,n,i,j,max,k,x,sum:integer;
begin
    clrscr;
    sum:=0; k:=0; max:=0; readln(m,n,x);
    for i:=1 to m do for j:=1 to n do readln(a[i,j]);
    for i:=1 to m do for j:=1 to n do
        if a[i,j]=x then 
            begin
                k:=k+1;
                writeln('So ',x,' duoc tim thay tai vi tri hang ', i, ' cot ', j);
            end;
    for i:=1 to m do
        begin
            for j:=1 to n do if a[i,j]>=max then max:=a[i,j];
            sum:=sum+max; max:=0;
        end;
    writeln(sum); readln;
end.