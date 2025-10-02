cmake_minimum_required(VERSION 3.22.1)

add_subdirectory(SFML-3.0.2)

#libs
set_target_properties(freetype PROPERTIES FOLDER "SFML/Dependencies")
set_target_properties(FLAC PROPERTIES FOLDER "SFML/Dependencies")
set_target_properties(ogg PROPERTIES FOLDER "SFML/Dependencies")
set_target_properties(vorbis PROPERTIES FOLDER "SFML/Dependencies")
set_target_properties(vorbisenc PROPERTIES FOLDER "SFML/Dependencies")
set_target_properties(vorbisfile PROPERTIES FOLDER "SFML/Dependencies")
set_target_properties(sfml-audio PROPERTIES FOLDER "SFML/SFML")
set_target_properties(sfml-graphics PROPERTIES FOLDER "SFML/SFML")
set_target_properties(sfml-main PROPERTIES FOLDER "SFML/SFML")
set_target_properties(sfml-network PROPERTIES FOLDER "SFML/SFML")
set_target_properties(sfml-system PROPERTIES FOLDER "SFML/SFML")
set_target_properties(sfml-window PROPERTIES FOLDER "SFML/SFML")