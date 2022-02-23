% Returns the rounded off position of the mouse
function [col row] = position(x, y)
    col = floor(x);
    row = floor(y);
    if col > 2 % if we're right on the 3 line, we count it as 2
        col = 2;
    end
    
    if row > 2
        row = 2;
    end
end
