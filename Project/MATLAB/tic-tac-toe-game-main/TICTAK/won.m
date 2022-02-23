% The won function calculates if the current game state is in a winning
% state.
function won = won(state)
    % Horizontal
    if (state(1,1) == state(1,2) && state(1,1) == state(1,3) && state(1,1) ~= -1)
        won = state(1,1);
    elseif (state(2,1) == state(2,2) && state(2,1) == state(2,3) && state(2,1) ~= -1)
        won = state(2,1);
    elseif (state(3,1) == state(3,2) && state(3,1) == state(3,3) && state(3,1) ~= -1)
        won = state(3,1);
    % Vertical
    elseif (state(1,1) == state(2,1) && state(1,1) == state(3,1) && state(3,1) ~= -1) 
        won = state(1,1);
    elseif (state(1,2) == state(2,2) && state(1,2) == state(3,2) && state(1,2) ~= -1) 
        won = state(1,2);
    elseif (state(1,3) == state(2,3) && state(1,3) == state(3,3) && state(1,3) ~= -1) 
        won = state(1,3);
    % Diagonal
    elseif (state(1,1) == state(2,2) && state(1,1) == state(3,3) && state(1,1) ~= -1)
        won = state(1,1);
    elseif (state(1,3) == state(2,2) && state(1,3) == state(3,1) && state(2,2) ~= -1)
        won = state(1,3);
    % If no more slots are open, it's a tie
    elseif ~ismember(state, -1)
        won = 2;
    else
        won = -1;
    end
end