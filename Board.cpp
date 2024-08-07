
#include "Board.hpp"


Board::Board() : vertices(54) {
    initialization_board();
    initialization_dev_cards();
}

void Board::initialization_board() {
    // vertices.resize(54);
    for (size_t i = 0; i <= 53; i++) {
        vertices[i] = Vertex(i);
    }

    // there are 72 edges in the game 0-71
    Edge edge0(&vertices[3], &vertices[0], 0);
    Edge edge1(&vertices[0], &vertices[4], 1);
    Edge edge2(&vertices[4], &vertices[1], 2);
    Edge edge3(&vertices[1], &vertices[5], 3);
    Edge edge4(&vertices[5], &vertices[2], 4);
    Edge edge5(&vertices[2], &vertices[6], 5);
    Edge edge6(&vertices[3], &vertices[7], 6);
    Edge edge7(&vertices[4], &vertices[8], 7);
    Edge edge8(&vertices[5], &vertices[9], 8);
    Edge edge9(&vertices[6], &vertices[10], 9);
    Edge edge10(&vertices[11], &vertices[7], 10);
    Edge edge11(&vertices[7], &vertices[12], 11);
    Edge edge12(&vertices[12], &vertices[8], 12);
    Edge edge13(&vertices[8], &vertices[13], 13);
    Edge edge14(&vertices[13], &vertices[9], 14);
    Edge edge15(&vertices[9], &vertices[14], 15);
    Edge edge16(&vertices[14], &vertices[10], 16);
    Edge edge17(&vertices[10], &vertices[15], 17);
    Edge edge18(&vertices[11], &vertices[16], 18);
    Edge edge19(&vertices[12], &vertices[17], 19);
    Edge edge20(&vertices[13], &vertices[18], 20);
    Edge edge21(&vertices[14], &vertices[19], 21);
    Edge edge22(&vertices[15], &vertices[20], 22);
    Edge edge23(&vertices[21], &vertices[1], 23);
    Edge edge24(&vertices[1], &vertices[22], 24);
    Edge edge25(&vertices[22], &vertices[17], 25);
    Edge edge26(&vertices[17], &vertices[23], 26);
    Edge edge27(&vertices[23], &vertices[18], 27);
    Edge edge28(&vertices[18], &vertices[14], 28);
    Edge edge29(&vertices[24], &vertices[19], 29);
    Edge edge30(&vertices[19], &vertices[25], 30);
    Edge edge31(&vertices[25], &vertices[20], 31);
    Edge edge32(&vertices[20], &vertices[26], 32);
    Edge edge33(&vertices[21], &vertices[27], 33);
    Edge edge34(&vertices[22], &vertices[28], 34);
    Edge edge35(&vertices[23], &vertices[29], 35);
    Edge edge36(&vertices[24], &vertices[30], 36);
    Edge edge37(&vertices[25], &vertices[31], 37);
    Edge edge38(&vertices[26], &vertices[32], 38);
    Edge edge39(&vertices[27], &vertices[33], 39);
    Edge edge40(&vertices[33], &vertices[28], 40);
    Edge edge41(&vertices[28], &vertices[34], 41);
    Edge edge42(&vertices[34], &vertices[29], 42);
    Edge edge43(&vertices[29], &vertices[35], 43);
    Edge edge44(&vertices[35], &vertices[30], 44);
    Edge edge45(&vertices[30], &vertices[36], 45);
    Edge edge46(&vertices[36], &vertices[31], 46);
    Edge edge47(&vertices[31], &vertices[37], 47);
    Edge edge48(&vertices[37], &vertices[32], 48);
    Edge edge49(&vertices[33], &vertices[38], 49);
    Edge edge50(&vertices[34], &vertices[39], 50);
    Edge edge51(&vertices[35], &vertices[40], 51);
    Edge edge52(&vertices[36], &vertices[41], 52);
    Edge edge53(&vertices[37], &vertices[42], 53);
    Edge edge54(&vertices[38], &vertices[43], 54);
    Edge edge55(&vertices[43], &vertices[39], 55);
    Edge edge56(&vertices[39], &vertices[44], 56);
    Edge edge57(&vertices[44], &vertices[40], 57);
    Edge edge58(&vertices[40], &vertices[45], 58);
    Edge edge59(&vertices[45], &vertices[41], 59);
    Edge edge60(&vertices[41], &vertices[46], 60);
    Edge edge61(&vertices[46], &vertices[42], 61);
    Edge edge62(&vertices[43], &vertices[47], 62);
    Edge edge63(&vertices[44], &vertices[48], 63);
    Edge edge64(&vertices[45], &vertices[49], 64);
    Edge edge65(&vertices[46], &vertices[50], 65);
    Edge edge66(&vertices[47], &vertices[51], 66);
    Edge edge67(&vertices[51], &vertices[48], 67);
    Edge edge68(&vertices[48], &vertices[52], 68);
    Edge edge69(&vertices[52], &vertices[49], 69);
    Edge edge70(&vertices[49], &vertices[53], 70);
    Edge edge71(&vertices[53], &vertices[50], 71);
    edges = {edge0, edge1, edge2, edge3, edge4, edge5, edge6, edge7, edge8, edge9, edge10, edge11, edge12, edge13, edge14, edge15, edge16, edge17, edge18, edge19, edge20, edge21, edge22, edge23, edge24, edge25, edge26, edge27, edge28, edge29, edge30, edge31, edge32, edge33, edge34, edge35, edge36, edge37, edge38, edge39, edge40, edge41, edge42, edge43, edge44, edge45, edge46, edge47, edge48, edge49, edge50, edge51, edge52, edge53, edge54, edge55, edge56, edge57, edge58, edge59, edge60, edge61, edge62, edge63, edge64, edge65, edge66, edge67, edge68, edge69, edge70, edge71};

    vertices[0].addEdge2(&edges[0], &edges[1]);
    vertices[1].addEdge2(&edges[2], &edges[3]);
    vertices[2].addEdge2(&edges[4], &edges[5]);
    vertices[3].addEdge2(&edges[6], &edges[0]);
    vertices[4].addEdge3(&edges[1], &edges[7], &edges[2]);
    vertices[5].addEdge3(&edges[3], &edges[4], &edges[8]);
    vertices[6].addEdge2(&edges[5], &edges[9]);
    vertices[7].addEdge3(&edges[6], &edges[10], &edges[11]);
    vertices[8].addEdge3(&edges[7], &edges[12], &edges[13]);
    vertices[9].addEdge3(&edges[8], &edges[14], &edges[15]);
    vertices[10].addEdge3(&edges[9], &edges[16], &edges[17]);
    vertices[11].addEdge2(&edges[10], &edges[18]);
    vertices[12].addEdge3(&edges[11], &edges[19], &edges[12]);
    vertices[13].addEdge3(&edges[13], &edges[20], &edges[14]);
    vertices[14].addEdge3(&edges[15], &edges[21], &edges[16]);
    vertices[15].addEdge2(&edges[17], &edges[22]);
    vertices[16].addEdge3(&edges[18], &edges[23], &edges[24]);
    vertices[17].addEdge3(&edges[19], &edges[25], &edges[26]);
    vertices[18].addEdge3(&edges[20], &edges[27], &edges[28]);
    vertices[19].addEdge3(&edges[21], &edges[29], &edges[30]);
    vertices[20].addEdge3(&edges[22], &edges[31], &edges[32]);
    vertices[21].addEdge2(&edges[33], &edges[23]);
    vertices[22].addEdge3(&edges[24], &edges[34], &edges[25]);
    vertices[23].addEdge3(&edges[26], &edges[35], &edges[27]);
    vertices[24].addEdge3(&edges[28], &edges[36], &edges[29]);
    vertices[25].addEdge3(&edges[30], &edges[37], &edges[31]);
    vertices[26].addEdge2(&edges[32], &edges[38]);
    vertices[27].addEdge2(&edges[33], &edges[39]);
    vertices[28].addEdge3(&edges[34], &edges[40], &edges[41]);
    vertices[29].addEdge3(&edges[35], &edges[42], &edges[43]);
    vertices[30].addEdge3(&edges[36], &edges[44], &edges[45]);
    vertices[31].addEdge3(&edges[37], &edges[46], &edges[47]);
    vertices[32].addEdge2(&edges[38], &edges[48]);
    vertices[33].addEdge3(&edges[39], &edges[40], &edges[49]);
    vertices[34].addEdge3(&edges[41], &edges[50], &edges[42]);
    vertices[35].addEdge3(&edges[43], &edges[51], &edges[44]);
    vertices[36].addEdge3(&edges[45], &edges[52], &edges[46]);
    vertices[37].addEdge3(&edges[47], &edges[53], &edges[48]);
    vertices[38].addEdge2(&edges[49], &edges[54]);
    vertices[39].addEdge3(&edges[50], &edges[55], &edges[56]);
    vertices[40].addEdge3(&edges[51], &edges[57], &edges[58]);
    vertices[41].addEdge3(&edges[52], &edges[59], &edges[60]);
    vertices[42].addEdge2(&edges[61], &edges[53]);
    vertices[43].addEdge3(&edges[54], &edges[62], &edges[55]);
    vertices[44].addEdge3(&edges[56], &edges[63], &edges[57]);
    vertices[45].addEdge3(&edges[58], &edges[64], &edges[59]);
    vertices[46].addEdge3(&edges[60], &edges[65], &edges[61]);
    vertices[47].addEdge2(&edges[66], &edges[62]);
    vertices[48].addEdge3(&edges[63], &edges[67], &edges[68]);
    vertices[49].addEdge3(&edges[64], &edges[69], &edges[70]);
    vertices[50].addEdge2(&edges[65], &edges[71]);
    vertices[51].addEdge2(&edges[66], &edges[67]);
    vertices[52].addEdge2(&edges[68], &edges[69]);
    vertices[53].addEdge2(&edges[70], &edges[71]);

    Hexagon hex0(&edges[0], &edges[1], &edges[7], &edges[6], &edges[11], &edges[12], &vertices[0], &vertices[12], &vertices[4], &vertices[3], &vertices[7], &vertices[8], 0);
    Hexagon hex1(&edges[2], &edges[3], &edges[8], &edges[7], &edges[13], &edges[14], &vertices[1], &vertices[13], &vertices[5], &vertices[4], &vertices[8], &vertices[9], 1);
    Hexagon hex2(&edges[4], &edges[5], &edges[9], &edges[8], &edges[15], &edges[16], &vertices[2], &vertices[6], &vertices[5], &vertices[9], &vertices[10], &vertices[14], 2);
    Hexagon hex3(&edges[10], &edges[11], &edges[18], &edges[19], &edges[24], &edges[25], &vertices[7], &vertices[11], &vertices[22], &vertices[16], &vertices[12], &vertices[17], 3);
    Hexagon hex4(&edges[12], &edges[13], &edges[20], &edges[19], &edges[27], &edges[26], &vertices[8], &vertices[12], &vertices[13], &vertices[17], &vertices[23], &vertices[18], 4);
    Hexagon hex5(&edges[14], &edges[15], &edges[21], &edges[20], &edges[28], &edges[29], &vertices[9], &vertices[13], &vertices[14], &vertices[18], &vertices[24], &vertices[19], 5);
    Hexagon hex6(&edges[16], &edges[17], &edges[22], &edges[21], &edges[30], &edges[31], &vertices[10], &vertices[14], &vertices[15], &vertices[20], &vertices[25], &vertices[19], 6);
    Hexagon hex7(&edges[23], &edges[24], &edges[33], &edges[34], &edges[40], &edges[39], &vertices[16], &vertices[21], &vertices[33], &vertices[27], &vertices[22], &vertices[28], 7);
    Hexagon hex8(&edges[25], &edges[26], &edges[35], &edges[34], &edges[42], &edges[41], &vertices[17], &vertices[22], &vertices[23], &vertices[28], &vertices[34], &vertices[29], 8);
    Hexagon hex9(&edges[27], &edges[28], &edges[36], &edges[35], &edges[43], &edges[44], &vertices[18], &vertices[23], &vertices[24], &vertices[29], &vertices[35], &vertices[30], 9);
    Hexagon hex10(&edges[29], &edges[30], &edges[37], &edges[36], &edges[45], &edges[46], &vertices[19], &vertices[24], &vertices[25], &vertices[30], &vertices[36], &vertices[31], 10);
    Hexagon hex11(&edges[31], &edges[32], &edges[38], &edges[37], &edges[47], &edges[48], &vertices[20], &vertices[25], &vertices[26], &vertices[31], &vertices[37], &vertices[32], 11);
    Hexagon hex12(&edges[41], &edges[40], &edges[49], &edges[50], &edges[55], &edges[54], &vertices[28], &vertices[33], &vertices[34], &vertices[38], &vertices[43], &vertices[39], 12);
    Hexagon hex13(&edges[43], &edges[42], &edges[51], &edges[50], &edges[57], &edges[56], &vertices[29], &vertices[34], &vertices[35], &vertices[39], &vertices[44], &vertices[40], 13);
    Hexagon hex14(&edges[45], &edges[44], &edges[52], &edges[51], &edges[58], &edges[59], &vertices[30], &vertices[35], &vertices[36], &vertices[40], &vertices[45], &vertices[41], 14);
    Hexagon hex15(&edges[47], &edges[46], &edges[53], &edges[52], &edges[60], &edges[61], &vertices[31], &vertices[36], &vertices[37], &vertices[41], &vertices[46], &vertices[42], 15);
    Hexagon hex16(&edges[56], &edges[55], &edges[62], &edges[63], &edges[66], &edges[67], &vertices[39], &vertices[44], &vertices[43], &vertices[47], &vertices[51], &vertices[48], 16);
    Hexagon hex17(&edges[58], &edges[57], &edges[64], &edges[63], &edges[68], &edges[69], &vertices[40], &vertices[45], &vertices[44], &vertices[48], &vertices[52], &vertices[49], 17);
    Hexagon hex18(&edges[60], &edges[59], &edges[65], &edges[64], &edges[70], &edges[71], &vertices[41], &vertices[46], &vertices[45], &vertices[49], &vertices[53], &vertices[50], 18);

    hexagons = {hex0, hex1, hex2, hex3, hex4, hex5, hex6, hex7, hex8, hex9, hex10, hex11, hex12, hex13, hex14, hex15, hex16, hex17, hex18};
}

// Knight Cards (Soldier Cards):3 cards
// Victory Point Cards: 4 cards
// Road Building Cards: 2 cards
// Year of Plenty Cards: 2 cards
// Monopoly Cards: 2 cards
 void Board::initialization_dev_cards() {
    devCards.push_back(std::make_unique<Knight>());
    devCards.push_back(std::make_unique<Knight>());
    devCards.push_back(std::make_unique<Knight>());
    devCards.push_back(std::make_unique<Victory_Point>());
    devCards.push_back(std::make_unique<Victory_Point>());
    devCards.push_back(std::make_unique<Victory_Point>());
    devCards.push_back(std::make_unique<Victory_Point>());
    devCards.push_back(std::make_unique<Road_Building>());
    devCards.push_back(std::make_unique<Road_Building>());
    devCards.push_back(std::make_unique<Year_Of_Plenty>());
    devCards.push_back(std::make_unique<Year_Of_Plenty>());
    devCards.push_back(std::make_unique<Monopoly>());
    devCards.push_back(std::make_unique<Monopoly>());
    // Create a random number generator
    std::random_device rd;
    std::mt19937 g(rd());

    // Shuffle the deck
    std::shuffle(devCards.begin(), devCards.end(), g);
 }
    void Board::print() {
        int k = 0;
        for (size_t i = 0; i < 18; i++) {
            cout << "hexagon id: " << k++ << endl;
            for (size_t j = 0; j < 6; j++) {
                // print all edge with id
                cout << "vertex id: " << hexagons[i].get_vertexs(j)->get_id() << " color " << hexagons[i].get_vertexs(j)->get_color() << endl;
            }
        }
        // print niw edges by hexagon
        for (size_t i = 0; i < 18; i++) {
            cout << "hexagon id: " << i << endl;
            for (size_t j = 0; j < 6; j++) {
                cout << "edge id: " << hexagons[i].get_edges(j)->get_id() << " color " << hexagons[i].get_edges(j)->get_color() << endl;
            }
        }
    }
      unique_ptr<DevCard> Board::get_dev_card() {
        if (devCards.empty()) {
            cout << "no more dev cards" << endl;
            // Handle the case where there are no development cards left
            return nullptr;  // Or throw an exception, or handle it as appropriate
        }
        auto card = move(devCards.back());
        cout << "move" << endl;
        devCards.pop_back();  // remove the card from the deck
        return card;
    }