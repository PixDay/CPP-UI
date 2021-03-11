project(cpp-ui VERSION 1.0.0.0 LANGUAGES CXX)

#signalons que nous voulons unb bibliothèque (statique)
add_library(cpp-ui STATIC "")
#indiquons les fichiers qui devront être utilisés
target_sources(cpp-ui PUBLIC
    # les fichiers "publics" (les fichier d'en-tête principalement)
    ui.hpp
    PRIVATE
    #les fichiers "privés" (d'implémentation, principalement)
    ui.cpp
)
#indiquons que le dossier qui contient les sources contient également des
#fichiers d'en-tête (pour permettre au compilateur de les trouver)
target_include_directories(cpp-ui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# indiquons à CMake que lib_1 dépend de sfml-system  (pour faire simple)
target_link_libraries(cpp-ui PUBLIC sfml-system sfml-graphics sfml-window)