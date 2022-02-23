function drawO(col, row)
    hold on
    t = 0:0.1:2*pi;
    x = cos(t)/2+0.5;
    y = sin(t)/2+0.5;
    plot(x+col, y+row)
    hold off
end