include_directories(${CMAKE_SOURCE_DIR}/src)
link_directories(${CMAKE_BINARY_DIR}/src)

add_library (renderer
  FrameBuffer.h FrameBuffer.cpp
  # Vector3D.h Vector3D.cpp
  Camera.h
  CoordSys.h
  Light.h
  Shader.h
  Shape.h
  Triangle.h
  Sphere.h
  HitStruct.h
  Ray.h
  SceneContainer.h
  jsonParser.cpp
  BlinnPhong.h BlinnPhong.cpp
  Lambertian.h Lambertian.cpp
  Box.h Box.cpp
  Mirror.h Mirror.cpp
  AABoundingBox.h AABoundingBox.cpp
  BVHNode.h BVHNode.cpp
)

#  add_executable (test_Triangle
#    test_Triangle.cpp
#  )

#  target_link_libraries (test_Triangle renderer)
#  target_link_libraries (test_Triangle sive-util)
#  target_link_libraries (test_Triangle ${Boost_LIBRARIES})
#  target_link_libraries (test_Triangle ${PNG_LIBRARIES})
#  target_link_libraries (test_Triangle ${ZLIB_LIBRARIES})

add_executable (main
  main.cpp
)

target_link_libraries (main renderer)
target_link_libraries (main sive-util)
target_link_libraries (main ${Boost_LIBRARIES})
target_link_libraries (main ${PNG_LIBRARIES})
target_link_libraries (main ${ZLIB_LIBRARIES})

# add_executable (test_json
#   test_json.cpp
# )

# target_link_libraries (test_json renderer)
# target_link_libraries (test_json sive-util)
# target_link_libraries (test_json ${Boost_LIBRARIES})
# target_link_libraries (test_json ${PNG_LIBRARIES})
# target_link_libraries (test_json ${ZLIB_LIBRARIES})