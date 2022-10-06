uses crt;
var a:array [1..100, 1..100] of integer;
var i,j,m,n,sumcol,sumrow:integer;
begin
    clrscr;
    sumcol:=0; sumrow:=0;
    writeln('Nhap M: '); readln(m);
    writeln('Nhap N: '); readln(n);
    writeln('Nhap phan tu cho mang: ');
    for i:=1 to m do 
        for j:=1 to n do readln(a[i,j]);
    
    for i:=1 to m do
        for j:=1 to n do 
            begin
                write(a[i,j]:1, ' '); 
                if j=n then writeln(' ');
            end;
    
    for i:=1 to m do
        begin
            for j:=1 to n do 
                begin
                    sumrow:=sumrow+a[i,j]; sumcol:=sumcol+a[j,i];
                end;
            writeln('Tong hang thu ', i , ' la ', sumrow);
            writeln('Tong cot thu ', i , ' la ', sumcol); 
            sumcol:=0; sumrow:=0; 
        end;  
    readln;
end.