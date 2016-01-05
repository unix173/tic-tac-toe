#/bin/sh

#-------------------------------
# Build game with c++11 support
# Start the game
# ------------------------------


CXX='clang++ -std=c++11' cmake ..
make
echo '###########   Starting game   #############'
echo 
./tictactoe
