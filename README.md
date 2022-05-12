## Render Examples
mirrorScene00.json 4rpp no glow

![mirrorScene1](https://user-images.githubusercontent.com/25695704/168164850-447c4e36-7a90-4e05-b529-9388acf2ef8c.png)

mirrorScene00.json w/ glow and 1rpp

![mirrorScene1Glow](https://user-images.githubusercontent.com/25695704/168164993-e961ccad-5c36-4b2b-95f4-a8455f753745.png)

mirrorScene01.json 4rpp & mirroredScene.json 4rpp

![mirrorScene2](https://user-images.githubusercontent.com/25695704/168165468-d5d0c78e-5119-481d-b2b4-417297045c98.png)
![mirrorScene2](https://user-images.githubusercontent.com/25695704/168166453-ca8345c8-3007-4dce-b1d2-884ec535e4c7.png)

simpleSphereScene.json 4rpp & threeBoxes.json 4rpp

![sphereScene](https://user-images.githubusercontent.com/25695704/168167176-93771b57-fed1-42ff-8a62-95a234b3a3ce.png)
![threeBoxes](https://user-images.githubusercontent.com/25695704/168167419-97de904a-a4ac-4a30-80cd-45ba60d44dc9.png)

boxSphereTest.json 1rpp

![boxSphereTest](https://user-images.githubusercontent.com/25695704/168168922-fca643ba-082b-4d14-ad29-d4a783985923.png)



## Running the Code

When you create your build folder and successfully execute the make command, cd into the renderer folder. This is where the ./main application is that we will use to run the code.
There are important flags that you should know:
* -i input: the path to the file that we want to read scene data from. There are many different scenes in the SceneData folder. An example path would be: ../../SceneData/scenes_A/threeTriangles.json. Note that the scenes that are compatible with this code are json files, not xml. Also, the scenes in scenes_B will likely not work due to having objects that aren't yet compatible with my code. 
* -o output: The name of the file the renderer outputs the image to. Should end with ".png"
* -w width
* -h height
* -r rays per pixel(rpp): For anti-aliasing, the higher rpp, the smoother the edges will be. If you don't set this is defaults to 1. I wouldn't go higher than 4.
* -k recursion depth: For mirrors, the amount of times a ray will "bounce" if it keeps hitting reflective surfaces before stopping. Defaults to 4. 

Haven't implemented command line functionality but to enable/disable glow you have to go into Framebuffer.cpp and set the variable glowSet to true/false.



Here is an example of a picture with glow and without glow:

![image](https://user-images.githubusercontent.com/25695704/168163865-b5160879-27c8-44de-aa7f-792fb9969d92.png) ![image](https://user-images.githubusercontent.com/25695704/168163885-edbf1cda-9987-4cf0-a7ac-013fedc39a00.png)



## Building the Code

This code requires libpng, zlib, and Boost libraries. 

---
On macos you can install these easily with homebrew.
These are the names of the libraries you must install using the 'brew install' command:
* cmake
* glew
* boost
* libpng

After this is done all we have to do is run the following commands using cmake
~~~~
mkdir build
cd build
cmake -DCMAKE_CXX_FLAGS=-std=c++14 -DPNG_PNG_INCLUDE_DIR=/usr/local/include ..
make
~~~~

The cmake command has extra flags due to a problem with the libpng library, but including these flags should fix it.


---
On Linux simply install the needed libraries: 
~~~~
sudo apt-get install libpng-dev libz-dev libboost-all-dev
~~~~

and build:
~~~~
mkdir build
cd build
cmake ..
make
~~~~






