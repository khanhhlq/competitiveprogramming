uses crt;
var a,b:array [1..100,1..100] of integer;
var m,n,i,j:integer;
begin
    clrscr;
        writeln('Nhap M: '); readln(m);
        writeln('Nhap N: '); readln(n);
        
        for i:=1 to m do 
            for j:=1 to n do readln(a[i,j]);
        
        for i:=1 to m do 
            for j:=1 to n do
                begin
                    write(a[i,j], ' ');
                    if j=n then writeln(' ');
                end;
        for i:=1 to n do
            for j:=1 to m do
                begin
                    b[i,j]:=a[j,i];
                end;
        for i:=1 to n do 
            for j:=1 to m do 
                begin
                    write(b[i,j], ' ');
                    if j=m then writeln(' ');
                end;
    readln;
end.