
% The state function takes in the current player and the previous state the
% game is in and simulates a single round.
function state = play(is_x, state)
    [x y] = ginput(1); % get the mouse position with respect to the plot
    [col row] = position(x, y); % get the corresponding row/col (note row starts off with 0 at the bottom)
    row = 2 - row; % the actual row within the state matrix
    if state(col+1, row+1) ~= -1 % if the player tries to click on a filled spot
       state = -1; % invalid, ask the player to try again
    else
        state(col+1, row+1) = is_x; % set the state and draw the X and the O
        if is_x
            drawX(col, 2 - row);
        else
            drawO(col, 2 - row);
        end
    end
end


