CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )
PROJECT( aeolus_proj )
FIND_PACKAGE( OpenCV REQUIRED )
ADD_LIBRARY( preprocessor preprocessor.cpp scale.cpp)
ADD_LIBRARY( processor processor.cpp )
ADD_LIBRARY( postprocessor postprocessor.cpp )
ADD_EXECUTABLE( aeolus preprocessor processor postprocessor main.cpp )
INCLUDE_DIRECTORIES( ${aeolus_source_dir}/ )
TARGET_LINK_LIBRARIES( aeolus preprocessor processor postprocessor ${OpenCV_LIBS} )

