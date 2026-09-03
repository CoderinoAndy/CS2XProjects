#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    bool single = false;
    int number;
    int end;
    cin >> number;
    cin >> end;
    int numbers = end - number + 1;
    // writing down my thoughts here, we can use perfect squares as a basis
    vector<int> squares = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int closestdistance = 101;
    int closestsquare;
    for(const auto& square : squares){
        if(abs(numbers - square) < closestdistance){
            closestdistance = abs(numbers - square);
            closestsquare = square;
        }
        // so basically we find the closest square to base our template on;
    }
    int width = sqrt(closestsquare); // this is the max width of our spiral/# of numbers per line
    vector<vector<int>> matrix(
        width + 1, vector<int>(width, 0)
    );
    // now we've set up a basic lines matrix with sufficiently large width/lengths to fit our numbers in.
    // Now, we need to code the logic for:
    // - where the spiral will be positioned inside the matrix (done)
    // - actual matrix fillout
    // - compiling together a final output based on the matrix created
    int currentlength = 0;
    if(number == end){
        cout << number;
        return 0;
    }
    if(width % 2 == 0){
        // position matrix at the bottom
        int nr = static_cast<int>(floor((width + 1)/2));
        int nc = static_cast<int>(width/2 - 1);
        matrix[nr][nc] = number;
        // go down, go right, go up, go left
        while(true){
            currentlength += 1;
            for(int i = 0; i < currentlength; ++i){
                nr += 1;
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
            for(int i = 0; i < currentlength; ++i){
                nc += 1; 
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    single = true;
                    goto exit;
                }
            }
            currentlength += 1;
            for(int i = 0; i < currentlength; ++i){
                nr -= 1;
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
            for(int i = 0; i < currentlength; ++i){
                nc -= 1;
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
        }
    } else {
        // position matrix at the top
        int nr = static_cast<int>(floor(width/2));
        int nc = static_cast<int>(floor(width/2));
        matrix[nr][nc] = number;
        // go down, go right, go up, go left
        while(true){
            currentlength += 1;
            for(int i = 0; i < currentlength; ++i){
                nr += 1;
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
            for(int i = 0; i < currentlength; ++i){
                nc += 1; 
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
            currentlength += 1;
            for(int i = 0; i < currentlength; ++i){
                nr -= 1;
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
            for(int i = 0; i < currentlength; ++i){
                nc -= 1;
                number += 1;
                matrix[nr][nc] = number;
                if(number == end){
                    goto exit;
                }
            }
        }
    }
    exit: 
    if(single){
        cout << number;
    } else {
        for(const auto& line : matrix){
            string output;
            for(const auto& number : line){
                if(number != 0){
                    output += to_string(number);
                    output += ' ';
                }
            }
            cout << output << '\n';
        }
    }
}