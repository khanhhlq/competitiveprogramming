uses crt;
var table:array[1..100,1..100] of integer;
var i,j,m,n:integer;
begin
    clrscr;
    readln(m,n);
    for i:=0 to m do
        for j:=0 to n do readln(table[i,j]);
    
    for i:=0 to m do
        for j:=0 to n do 
            begin
                write(table[i,j],' ');
                if j=n then writeln(' '); 
            end;
    readln;
end.