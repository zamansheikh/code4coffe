function [] = tictactoe()
    % Setup the figure/windows for the game
    close all
    figure('Name','Tic Tac Toe');
    plot(-1. -1)
    axis([0 3 0 3])
    set(gca,'xTick',0:3)
    set(gca,'yTick',0:3)
    set(gca,'xTickLabel','')
    set(gca,'yTickLabel','')
    xlabel('Player: X')
    grid on
    shg
    
    is_x = 1; % keeps track of the current player
    state = [[-1 -1 -1]
             [-1 -1 -1]
             [-1 -1 -1]]; % the state of the game (-1 none, 0 = O, 1 = X)
    winner = -1; % is there a winner? is it a tie?
    
    % The main game loop. Continue until the game ends with winner ~= -1
    while winner == -1
        next = play(is_x, state); % play a single round
        if next == -1 % if the player clicks on a filled in slot, ask them to try again
           title('Invalid move, please try again');
        else
           state = next; % advance the current state
           title('');
           is_x = mod(is_x + 1,2); % pick the next player and update the player label
           if is_x == 1
               xlabel('Player: X');
           else
               xlabel('Player: O');
           end
           winner = won(state); % check to see if the game is in a winning state
        end
    end
    
    if winner == 0 % O won
        warndlg('O wins');
        title('O wins');
        xlabel('');
    elseif winner == 1 % X won
        warndlg('X wins');
        title('X wins');
        xlabel('');
    else % else it's a tie
        warndlg('Tie');
        title('Tie');
        xlabel('');
    end
end



