#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <thread>
#include <chrono>


int bsp = 20;
int Apsp = 30;
int Bpsp = 30;

int invistepA = 0;
int invistepB = 0;

int boxAtnum[1];
int boxBtnum[1];

bool haswitchA = false;

bool haredirectA = false;
int redirectAstep = 0;
bool isredirectApressed = false;

bool haspinA = false;
int spinAstep = 0;
bool isspinApressed = false;

bool haswitchB = false;

bool haredirectB = false;
int redirectBstep = 0;
bool isredirectBpressed = false;

bool haspinB = false;
int spinBstep = 0;
bool isspinBpressed = false;




int main()
{


    sf::RenderWindow window(sf::VideoMode(1000, 1000), "game", sf::Style::Close|sf::Style::Titlebar|sf::Style::Resize);


    sf::Texture textureA;
    sf::Texture textureB;
    sf::Texture textureBA;
    sf::Texture textureBB;
    sf::Texture textureAwin;
    sf::Texture textureBwin;
    sf::Texture texturebullA;
    sf::Texture texturebullB;
    sf::Texture textureadd;
    sf::Texture texturebox;
    sf::Texture textureswitch;
    sf::Texture textureredirect;
    sf::Texture texturespin;
    sf::Texture textureswitchB;
    sf::Texture textureredirectB;
    sf::Texture texturespinB;
    sf::Texture textureintro;
    sf::Texture textureintro1;
    sf::Texture textureintro2;
    sf::Texture textureintro3;
    sf::Texture textureintro4;
    sf::Texture textureintro5;
    sf::Texture textureintro6;

    if(!textureintro1.loadFromFile("intro1.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureintro2.loadFromFile("intro2.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureintro3.loadFromFile("intro3.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureintro4.loadFromFile("intro4.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureintro5.loadFromFile("intro5.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureintro6.loadFromFile("intro6.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureswitchB.loadFromFile("switchB.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureredirectB.loadFromFile("redirectB.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!texturespinB.loadFromFile("spinB.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!texturespin.loadFromFile("spin.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureredirect.loadFromFile("redirect.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureswitch.loadFromFile("switch.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!texturebox.loadFromFile("box.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureadd.loadFromFile("addpoint.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!texturebullA.loadFromFile("bulletA.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!texturebullB.loadFromFile("bulletB.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureintro.loadFromFile("introduce.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureA.loadFromFile("circleA.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureB.loadFromFile("circleB.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureBA.loadFromFile("boomBA.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureBB.loadFromFile("boomBB.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureAwin.loadFromFile("playerAwin.png"))
    {
        std::cout << "error loading" << std::endl;
    }
    if(!textureBwin.loadFromFile("playerBwin.png"))
    {
        std::cout << "error loading" << std::endl;
    }

    sf::Sprite spriteintro1;
    spriteintro1.setTexture(textureintro1);
    sf::Sprite spriteintro2;
    spriteintro2.setTexture(textureintro2);
    sf::Sprite spriteintro3;
    spriteintro3.setTexture(textureintro3);
    sf::Sprite spriteintro4;
    spriteintro4.setTexture(textureintro4);
    sf::Sprite spriteintro5;
    spriteintro5.setTexture(textureintro5);
    sf::Sprite spriteintro6;
    spriteintro6.setTexture(textureintro6);
    sf::Sprite spriteswitchB;
    spriteswitchB.setTexture(textureswitchB);
    sf::Sprite spriteredirectB;
    spriteredirectB.setTexture(textureredirectB);
    sf::Sprite spritespinB;
    spritespinB.setTexture(texturespinB);
    sf::Sprite spritespin;
    spritespin.setTexture(texturespin);
    sf::Sprite spriteredirect;
    spriteredirect.setTexture(textureredirect);
    sf::Sprite spriteswitch;
    spriteswitch.setTexture(textureswitch);
    sf::Sprite spritebox;
    spritebox.setTexture(texturebox);
    sf::Sprite spriteadd;
    spriteadd.setTexture(textureadd);
    sf::Sprite spritebullA;
    spritebullA.setTexture(texturebullA);
    sf::Sprite spritebullB;
    spritebullB.setTexture(texturebullB);
    sf::Sprite spriteintro;
    spriteintro.setTexture(textureintro);
    sf::Sprite spriteA;
    spriteA.setTexture(textureA);
    sf::Sprite spriteB;
    spriteB.setTexture(textureB);
    sf::Sprite spriteBA;
    spriteBA.setTexture(textureBA);
    sf::Sprite spriteBB;
    spriteBB.setTexture(textureBB);
    sf::Sprite spriteAwin;
    spriteAwin.setTexture(textureAwin);
    sf::Sprite spriteBwin;
    spriteBwin.setTexture(textureBwin);

    spriteA.setPosition(sf::Vector2f(0, 400));
    spriteB.setPosition(sf::Vector2f(840, 400));
    spriteBA.setPosition(sf::Vector2f(160, 400));
    spriteBB.setPosition(sf::Vector2f(744, 400));
    srand(time(NULL));
    int Ax = rand()%700+100;
    int Ay = rand()%700+100;
    int Bx = rand()%700+100;
    int By = rand()%700+100;
    int addx = rand()%700+100;
    int addy = rand()%700+100;
    int boxx = rand()%700+100;
    int boxy = rand()%700+100;
    spritebullA.setPosition(sf::Vector2f(Ax,Ay));
    spritebullB.setPosition(sf::Vector2f(Bx,By));
    spriteadd.setPosition(sf::Vector2f(addx,addy));
    spritebox.setPosition(sf::Vector2f(boxx,boxy));
    spriteswitch.setPosition(sf::Vector2f(2000,2000));
    spriteredirect.setPosition(sf::Vector2f(2000,2000));
    spritespin.setPosition(sf::Vector2f(2000,2000));
    spriteswitchB.setPosition(sf::Vector2f(2000,2000));
    spriteredirectB.setPosition(sf::Vector2f(2000,2000));
    spritespinB.setPosition(sf::Vector2f(2000,2000));



    int playApoint = 0;
    int playBpoint = 0;

    while(window.isOpen())
    {

        //gear position
        if(haswitchA == false)
        {
            spriteswitch.setPosition(sf::Vector2f(2000, 2000));
        }
        if(haredirectA== false)
        {
            spriteredirect.setPosition(sf::Vector2f(2000, 2000));
        }
        if(haspinA == false)
        {
            spritespin.setPosition(sf::Vector2f(2000, 2000));
        }
        if(haswitchB == false)
        {
            spriteswitchB.setPosition(sf::Vector2f(2000, 2000));
        }
        if(haredirectB== false)
        {
            spriteredirectB.setPosition(sf::Vector2f(2000, 2000));
        }
        if(haspinB == false)
        {
            spritespinB.setPosition(sf::Vector2f(2000, 2000));
        }
        if(haswitchA == true)
        {
            sf::Vector2f tempspriteAposition = spriteA.getPosition();
            spriteswitch.setPosition(tempspriteAposition);
        }
        if(haredirectA == true)
        {
            sf::Vector2f tempspriteAposition = spriteA.getPosition();
            spriteredirect.setPosition(tempspriteAposition);
        }
        if(haspinA == true)
        {
            sf::Vector2f tempspriteAposition = spriteA.getPosition();
            spritespin.setPosition(tempspriteAposition);
        }
        if(haswitchB == true)
        {
            sf::Vector2f tempspriteAposition = spriteB.getPosition();
            spriteswitchB.setPosition(tempspriteAposition);
        }
        if(haredirectB == true)
        {
            sf::Vector2f tempspriteAposition = spriteB.getPosition();
            spriteredirectB.setPosition(tempspriteAposition);
        }
        if(haspinB == true)
        {
            sf::Vector2f tempspriteAposition = spriteB.getPosition();
            spritespinB.setPosition(tempspriteAposition);
        }
        //gear position


        if(spriteB.getGlobalBounds().intersects(spriteBA.getGlobalBounds()))
        {
            spriteswitchB.setPosition(sf::Vector2f(2000,2000));
            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
            spritespinB.setPosition(sf::Vector2f(2000,2000));
            if(boxBtnum[0] == 1 && haswitchA == true)
            {
                spriteswitchB.setPosition(sf::Vector2f(840,400));
            }
            if(boxBtnum[0] == 2 && haredirectA == true)
            {
                spriteredirectB.setPosition(sf::Vector2f(840,400));
            }
            if(boxBtnum[0] == 3 && haspinA == true)
            {
                spritespinB.setPosition(sf::Vector2f(840,400));
            }
            playApoint++;
            spriteA.setPosition(sf::Vector2f(0, 400));
            spriteB.setPosition(sf::Vector2f(840, 400));
            spriteBA.setPosition(sf::Vector2f(160, 400));
            spriteBB.setPosition(sf::Vector2f(744, 400));
            std::cout << "playerA point:" << playApoint << std::endl;
        }
        if(spriteA.getGlobalBounds().intersects(spriteBB.getGlobalBounds()))
        {
            spriteswitch.setPosition(sf::Vector2f(2000,2000));
            spriteredirect.setPosition(sf::Vector2f(2000,2000));
            spritespin.setPosition(sf::Vector2f(2000,2000));
            if(boxAtnum[0] == 1 && haswitchB == true)
            {
                spriteswitch.setPosition(sf::Vector2f(0,400));
            }
            if(boxAtnum[0] == 2 && haredirectB == true)
            {
                spriteredirect.setPosition(sf::Vector2f(0,400));
            }
            if(boxAtnum[0] == 3 && haspinB == true)
            {
                spritespin.setPosition(sf::Vector2f(0,400));
            }
            playBpoint++;
            spriteA.setPosition(sf::Vector2f(0, 400));
            spriteB.setPosition(sf::Vector2f(840, 400));
            spriteBA.setPosition(sf::Vector2f(160, 400));
            spriteBB.setPosition(sf::Vector2f(744, 400));
            std::cout << "playerB point:" << playBpoint << std::endl;
        }
        if(spriteA.getGlobalBounds().intersects(spritebullA.getGlobalBounds()))
        {
            spriteswitch.setPosition(sf::Vector2f(2000,2000));
            spriteredirect.setPosition(sf::Vector2f(2000,2000));
            spritespin.setPosition(sf::Vector2f(2000,2000));
            if(boxAtnum[0] == 1 && haswitchA == true)
            {
                spriteswitch.setPosition(sf::Vector2f(0,400));
            }
            if(boxAtnum[0] == 2 && haredirectA == true)
            {
                spriteredirect.setPosition(sf::Vector2f(0,400));
            }
            if(boxAtnum[0] == 3 && haspinA == true)
            {
                spritespin.setPosition(sf::Vector2f(0,400));
            }
            playBpoint++;
            spriteA.setPosition(sf::Vector2f(0, 400));
            spriteB.setPosition(sf::Vector2f(840, 400));
            spriteBA.setPosition(sf::Vector2f(160, 400));
            spriteBB.setPosition(sf::Vector2f(744, 400));
            int Acx = rand()%700+100;
            int Acy = rand()%700+100;
            spritebullA.setPosition(sf::Vector2f(Acx,Acy));
            std::cout << "playerB point:" << playBpoint << std::endl;
        }
        if(spriteB.getGlobalBounds().intersects(spritebullB.getGlobalBounds()))
        {
            spriteswitchB.setPosition(sf::Vector2f(2000,2000));
            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
            spritespinB.setPosition(sf::Vector2f(2000,2000));
            if(boxBtnum[0] == 1 && haswitchB == true)
            {
                spriteswitchB.setPosition(sf::Vector2f(840,400));
            }
            if(boxBtnum[0] == 2 && haredirectB == true)
            {
                spriteredirectB.setPosition(sf::Vector2f(840,400));
            }
            if(boxBtnum[0] == 3 && haspinB == true)
            {
                spritespinB.setPosition(sf::Vector2f(840,400));
            }
            playApoint++;
            spriteA.setPosition(sf::Vector2f(0, 400));
            spriteB.setPosition(sf::Vector2f(840, 400));
            spriteBA.setPosition(sf::Vector2f(160, 400));
            spriteBB.setPosition(sf::Vector2f(744, 400));
            int Bcx = rand()%700+100;
            int Bcy = rand()%700+100;
            spritebullB.setPosition(sf::Vector2f(Bcx,Bcy));
            std::cout << "playerA point:" << playApoint << std::endl;
        }
        if(spriteA.getGlobalBounds().intersects(spriteadd.getGlobalBounds()))
        {
            spriteswitch.setPosition(sf::Vector2f(2000,2000));
            spriteredirect.setPosition(sf::Vector2f(2000,2000));
            spritespin.setPosition(sf::Vector2f(2000,2000));
            if(boxAtnum[0] == 1)
            {
                spriteswitch.setPosition(sf::Vector2f(0,400));
            }
            if(boxAtnum[0] == 2)
            {
                spriteredirect.setPosition(sf::Vector2f(0,400));
            }
            if(boxAtnum[0] == 3)
            {
                spritespin.setPosition(sf::Vector2f(0,400));
            }
            spriteA.setPosition(sf::Vector2f(0, 400));
            spriteB.setPosition(sf::Vector2f(840, 400));
            spriteBA.setPosition(sf::Vector2f(160, 400));
            spriteBB.setPosition(sf::Vector2f(744, 400));
            int gift = rand()%4+1;
            int addcx = rand()%700+100;
            int addcy = rand()%700+100;
            spriteadd.setPosition(sf::Vector2f(addcx,addcy));

            if(gift == 1)
            {
                Apsp = Apsp + 10;
                std::cout << "playerA get speed up" << std::endl;
            }
            if(gift == 2)
            {
                playApoint++;
                std::cout << "playerA get add point" << std::endl;
                std::cout << "playerA point:" << playApoint << std::endl;
            }
            if(gift == 3)
            {
                playApoint--;
                std::cout << "playerA get minus point" << std::endl;
                std::cout << "playerA point:" << playApoint << std::endl;
            }
            if(gift == 4)
            {
                std::cout << "playerA get invisible" << std::endl;
                invistepA = 0;
                spriteA.setColor(sf::Color(255, 255, 255, 0));
            }
        }
        if(invistepA == 25)
        {
            spriteA.setColor(sf::Color(255, 255, 255, 255));
        }

        if(spriteB.getGlobalBounds().intersects(spriteadd.getGlobalBounds()))
        {
            spriteswitchB.setPosition(sf::Vector2f(2000,2000));
            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
            spritespinB.setPosition(sf::Vector2f(2000,2000));
            if(boxBtnum[0] == 1)
            {
                spriteswitchB.setPosition(sf::Vector2f(840,400));
            }
            if(boxBtnum[0] == 2)
            {
                spriteredirectB.setPosition(sf::Vector2f(840,400));
            }
            if(boxBtnum[0] == 3)
            {
                spritespinB.setPosition(sf::Vector2f(840,400));
            }
            spriteA.setPosition(sf::Vector2f(0, 400));
            spriteB.setPosition(sf::Vector2f(840, 400));
            spriteBA.setPosition(sf::Vector2f(160, 400));
            spriteBB.setPosition(sf::Vector2f(744, 400));
            spriteswitch.setPosition(sf::Vector2f(0, 400));
            int giftB = rand()%4+1;
            int addcxtb = rand()%700+100;
            int addcytb = rand()%700+100;
            spriteadd.setPosition(sf::Vector2f(addcxtb,addcytb));
            if(giftB == 1)
            {
                Bpsp = Bpsp + 10;
                std::cout << "playerB get speed up" << std::endl;
            }
            if(giftB == 2)
            {
                playBpoint++;
                std::cout << "playerB get add point" << std::endl;
                std::cout << "playerB point:" << playBpoint << std::endl;
            }
            if(giftB == 3)
            {
                playBpoint--;
                std::cout << "playerB get minus point" << std::endl;
                std::cout << "playerB point:" << playBpoint << std::endl;
            }
            if(giftB == 4)
            {
                std::cout << "playerB get invisible" << std::endl;
                invistepB = 0;
                spriteB.setColor(sf::Color(255, 255, 255, 0));
            }
        }
        if(invistepB == 25)
        {
            spriteB.setColor(sf::Color(255, 255, 255, 255));
        }

        if(spriteA.getGlobalBounds().intersects(spritebox.getGlobalBounds()))
        {
            int boxcx = rand()%700+100;
            int boxcy = rand()%700+100;
            spritebox.setPosition(sf::Vector2f(boxcx, boxcy));
            int boxAt = rand()%3+1;
            boxAtnum[0] = boxAt;
            if(boxAtnum[0] == 1)
            {
                haswitchA = true;
                spriteswitch.setPosition(sf::Vector2f(2000,2000));
                spriteredirect.setPosition(sf::Vector2f(2000,2000));
                spritespin.setPosition(sf::Vector2f(2000,2000));
                std::cout << "playerA get switch" << std::endl;
                spriteA.setPosition(sf::Vector2f(0, 400));
                spriteB.setPosition(sf::Vector2f(840, 400));
                spriteBA.setPosition(sf::Vector2f(160, 400));
                spriteBB.setPosition(sf::Vector2f(744, 400));
                spriteswitch.setPosition(sf::Vector2f(0, 400));
            }
            if(boxAtnum[0] == 2)
            {
                haredirectA = true;
                spriteswitch.setPosition(sf::Vector2f(2000,2000));
                spriteredirect.setPosition(sf::Vector2f(2000,2000));
                spritespin.setPosition(sf::Vector2f(2000,2000));
                std::cout << "playerA get redirect" << std::endl;
                spriteA.setPosition(sf::Vector2f(0, 400));
                spriteB.setPosition(sf::Vector2f(840, 400));
                spriteBA.setPosition(sf::Vector2f(160, 400));
                spriteBB.setPosition(sf::Vector2f(744, 400));
                spriteredirect.setPosition(sf::Vector2f(0, 400));
            }
            if(boxAtnum[0] == 3)
            {
                haspinA = true;
                spriteswitch.setPosition(sf::Vector2f(2000,2000));
                spriteredirect.setPosition(sf::Vector2f(2000,2000));
                spritespin.setPosition(sf::Vector2f(2000,2000));
                std::cout << "playerA get spin" << std::endl;
                spriteA.setPosition(sf::Vector2f(0, 400));
                spriteB.setPosition(sf::Vector2f(840, 400));
                spriteBA.setPosition(sf::Vector2f(160, 400));
                spriteBB.setPosition(sf::Vector2f(744, 400));
                spritespin.setPosition(sf::Vector2f(0, 400));
            }
        }
        if(spriteB.getGlobalBounds().intersects(spritebox.getGlobalBounds()))
        {
            int boxcx = rand()%700+100;
            int boxcy = rand()%700+100;
            spritebox.setPosition(sf::Vector2f(boxcx, boxcy));
            int boxBt = rand()%3+1;
            boxBtnum[0] = boxBt;
            if(boxBtnum[0] == 1)
            {
                haswitchB = true;
                spriteswitchB.setPosition(sf::Vector2f(2000,2000));
                spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                spritespinB.setPosition(sf::Vector2f(2000,2000));
                std::cout << "playerB get switch" << std::endl;
                spriteA.setPosition(sf::Vector2f(0, 400));
                spriteB.setPosition(sf::Vector2f(840, 400));
                spriteBA.setPosition(sf::Vector2f(160, 400));
                spriteBB.setPosition(sf::Vector2f(744, 400));
                spriteswitchB.setPosition(sf::Vector2f(840, 400));
            }
            if(boxBtnum[0] == 2)
            {
                haredirectB = true;
                spriteswitchB.setPosition(sf::Vector2f(2000,2000));
                spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                spritespinB.setPosition(sf::Vector2f(2000,2000));
                std::cout << "playerB get redirect" << std::endl;
                spriteA.setPosition(sf::Vector2f(0, 400));
                spriteB.setPosition(sf::Vector2f(840, 400));
                spriteBA.setPosition(sf::Vector2f(160, 400));
                spriteBB.setPosition(sf::Vector2f(744, 400));
                spriteredirectB.setPosition(sf::Vector2f(840, 400));
            }
            if(boxBtnum[0] == 3)
            {
                haspinB = true;
                spriteswitchB.setPosition(sf::Vector2f(2000,2000));
                spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                spritespinB.setPosition(sf::Vector2f(2000,2000));
                std::cout << "playerB get spin" << std::endl;
                spriteA.setPosition(sf::Vector2f(0, 400));
                spriteB.setPosition(sf::Vector2f(840, 400));
                spriteBA.setPosition(sf::Vector2f(160, 400));
                spriteBB.setPosition(sf::Vector2f(744, 400));
                spritespinB.setPosition(sf::Vector2f(840, 400));
            }

        }


        sf::Event event;

        while(window.pollEvent(event))
        {
            if(redirectBstep == 25)
            {
                isredirectApressed = false;
            }
            if(redirectAstep == 25)
            {
                isredirectBpressed = false;
            }
            if(spinAstep == 36)
            {
                isspinBpressed = false;
            }
            if(spinBstep == 36)
            {
                isspinApressed = false;
            }



            switch(event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                switch(event.key.code)
                {
                case sf::Keyboard::W:
                    if(spriteA.getPosition().y == 0)
                    {
                        spriteA.move(sf::Vector2f(0,0));
                        spriteswitch.move(sf::Vector2f(0,0));
                        spriteredirect.move(sf::Vector2f(0,0));
                        spritespin.move(sf::Vector2f(0,0));
                    }
                    else if(spriteA.getPosition().y == 10)
                    {
                        spriteA.move(sf::Vector2f(0,-10));
                        spriteswitch.move(sf::Vector2f(0,-10));
                        spriteredirect.move(sf::Vector2f(0,-10));
                        spritespin.move(sf::Vector2f(0,-10));
                        invistepA++;
                    }
                    else if(isredirectBpressed == true)
                    {
                        if(spriteA.getPosition().y > 820)
                        {
                            spriteA.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteA.move(sf::Vector2f(0, Bpsp));
                            redirectAstep++;
                        }
                    }
                    else if(isspinBpressed == true)
                    {
                        spriteA.rotate(10.0f);
                        spinAstep++;
                    }
                    else
                    {
                        spriteA.move(sf::Vector2f(0,-Apsp));
                        spriteswitch.move(sf::Vector2f(0,-Apsp));
                        spriteredirect.move(sf::Vector2f(0,-Apsp));
                        spritespin.move(sf::Vector2f(0,-Apsp));
                        spriteBA.move(sf::Vector2f(0,-bsp));
                        invistepA++;
                    }
                    break;

                case sf::Keyboard::A:
                    if(isredirectBpressed == true)
                    {
                        if(spriteA.getPosition().x > 820)
                        {
                            spriteA.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteA.move(sf::Vector2f(Bpsp, 0));
                            redirectAstep++;
                        }
                    }
                    else if(spriteA.getPosition().x == 0)
                    {
                        spriteA.move(sf::Vector2f(0,0));
                        spriteswitch.move(sf::Vector2f(0,0));
                        spriteredirect.move(sf::Vector2f(0,0));
                        spritespin.move(sf::Vector2f(0,0));
                    }
                    else if(isspinBpressed == true)
                    {
                        spriteA.move(sf::Vector2f(0, 0));
                    }
                    else
                    {
                        spriteA.move(sf::Vector2f(-Apsp,0));
                        spriteswitch.move(sf::Vector2f(-Apsp,0));
                        spriteredirect.move(sf::Vector2f(-Apsp,0));
                        spritespin.move(sf::Vector2f(-Apsp,0));
                        spriteBA.move(sf::Vector2f(-bsp,0));
                        invistepA++;
                    }
                    break;

                case sf::Keyboard::S:
                    if(spriteA.getPosition().y == 840)
                    {
                        spriteA.move(sf::Vector2f(0,0));
                        spriteswitch.move(sf::Vector2f(0,0));
                        spriteredirect.move(sf::Vector2f(0,0));
                        spritespin.move(sf::Vector2f(0,0));
                    }
                    else if(spriteA.getPosition().y == 820)
                    {
                        spriteA.move(sf::Vector2f(0,20));
                        spriteswitch.move(sf::Vector2f(0,20));
                        spriteredirect.move(sf::Vector2f(0,20));
                        spritespin.move(sf::Vector2f(0,20));
                        invistepA++;
                    }
                    else if(isredirectBpressed == true)
                    {
                        if(spriteA.getPosition().y < 0)
                        {
                            spriteA.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteA.move(sf::Vector2f(0, -Bpsp));
                            redirectAstep++;
                        }

                    }
                    else if(isspinBpressed == true)
                    {
                        spriteA.move(sf::Vector2f(0, 0));
                    }
                    else
                    {
                        spriteA.move(sf::Vector2f(0,Apsp));
                        spriteswitch.move(sf::Vector2f(0,Apsp));
                        spriteredirect.move(sf::Vector2f(0,Apsp));
                        spritespin.move(sf::Vector2f(0,Apsp));
                        spriteBA.move(sf::Vector2f(0,bsp));
                        invistepA++;
                    }
                    break;

                case sf::Keyboard::D:
                    if(isredirectBpressed == true)
                    {
                        if(spriteA.getPosition().x < 1)
                        {
                            spriteA.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteA.move(sf::Vector2f(-Bpsp, 0));
                            redirectAstep++;
                        }

                    }
                    else if(spriteA.getPosition().x == 840)
                    {
                        spriteA.move(sf::Vector2f(0,0));
                        spriteswitch.move(sf::Vector2f(0,0));
                        spriteredirect.move(sf::Vector2f(0,0));
                        spritespin.move(sf::Vector2f(0,0));
                    }
                    else if(isspinBpressed == true)
                    {
                        spriteA.move(sf::Vector2f(0, 0));
                    }
                    else
                    {
                        spriteA.move(sf::Vector2f(Apsp,0));
                        spriteswitch.move(sf::Vector2f(Apsp,0));
                        spriteredirect.move(sf::Vector2f(Apsp,0));
                        spritespin.move(sf::Vector2f(Apsp,0));
                        spriteBA.move(sf::Vector2f(bsp,0));
                        invistepA++;
                    }
                    break;

                case sf::Keyboard::C:
                    {
                        if(spriteBA.getPosition().x > 880)
                        {
                            spriteBA.move(sf::Vector2f(0,0));


                        }
                        else
                        {
                            spriteBA.move(sf::Vector2f(bsp,0));

                        }
                    }
                    break;


                case sf::Keyboard::X:
                    {
                        if(spriteBA.getPosition().x < 20)
                        {
                            spriteBA.move(sf::Vector2f(0,0));


                        }
                        else
                        {
                            spriteBA.move(sf::Vector2f(-bsp,0));

                        }
                    }
                    break;
                case sf::Keyboard::V:
                    {
                        spriteswitch.setPosition(sf::Vector2f(2000, 2000));
                        spriteredirect.setPosition(sf::Vector2f(2000, 2000));
                        spritespin.setPosition(sf::Vector2f(2000, 2000));
                        spriteswitchB.setPosition(sf::Vector2f(2000, 2000));
                        spriteredirectB.setPosition(sf::Vector2f(2000, 2000));
                        spritespinB.setPosition(sf::Vector2f(2000, 2000));
                        if(boxAtnum[0] == 1 && haswitchA == true)
                        {
                            spriteswitch.setPosition(sf::Vector2f(2000,2000));
                            spriteredirect.setPosition(sf::Vector2f(2000,2000));
                            spritespin.setPosition(sf::Vector2f(2000,2000));
                            spriteswitchB.setPosition(sf::Vector2f(2000,2000));
                            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                            spritespinB.setPosition(sf::Vector2f(2000,2000));
                            sf::Vector2f tempPositionplayer = spriteA.getPosition();
                            spriteA.setPosition(spriteB.getPosition());
                            spriteB.setPosition(tempPositionplayer);
                            sf::Vector2f tempPositionboom = spriteBA.getPosition();
                            spriteBA.setPosition(spriteBB.getPosition());
                            spriteBB.setPosition(tempPositionboom);
                            boxBtnum[0] = 0;
                            haswitchA = false;
                            haswitchB = false;
                            haredirectB = false;
                            haspinB = false;
                        }

                        if(boxAtnum[0] == 2 && haredirectA == true)
                        {
                            redirectBstep = 0;
                            isredirectApressed = true;
                            spriteredirect.setPosition(sf::Vector2f(2000,2000));
                            boxAtnum[0] = 0;
                            haredirectA = false;
                            boxBtnum[0] = 0;
                            spriteswitchB.setPosition(sf::Vector2f(2000,2000));
                            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                            spritespinB.setPosition(sf::Vector2f(2000,2000));
                            haswitchB = false;
                            haredirectB = false;
                            haspinB = false;
                        }
                        if(boxAtnum[0] == 3 && haspinA == true )
                        {
                            spinBstep = 0;
                            isspinApressed = true;
                            haspinA = false;
                            spritespin.setPosition(sf::Vector2f(2000, 2000));
                            boxAtnum[0] = 0;
                            haswitchB = false;
                            spritespinB.setPosition(sf::Vector2f(2000, 2000));
                            haredirectB = false;
                            spriteredirectB.setPosition(sf::Vector2f(2000, 2000));
                            haspinB = false;
                            spritespinB.setPosition(sf::Vector2f(2000, 2000));
                            boxBtnum[0] = 0;


                        }
                    }







                case sf::Keyboard::U:
                    if(spriteB.getPosition().y == 0)
                    {
                        spriteB.move(sf::Vector2f(0,0));
                        spriteswitchB.move(sf::Vector2f(0,0));
                        spriteredirectB.move(sf::Vector2f(0,0));
                        spritespinB.move(sf::Vector2f(0,0));
                    }
                    else if(spriteB.getPosition().y == 10)
                    {
                        spriteB.move(sf::Vector2f(0,-10));
                        spriteswitchB.move(sf::Vector2f(0,-10));
                        spriteredirectB.move(sf::Vector2f(0,-10));
                        spritespinB.move(sf::Vector2f(0,-10));
                        invistepB++;
                    }
                    else if(isredirectApressed == true)
                    {
                        if(spriteB.getPosition().y > 820)
                        {
                            spriteB.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteB.move(sf::Vector2f(0, Bpsp));
                            redirectBstep++;
                        }

                    }
                    else if(isspinApressed == true)
                    {
                        spriteB.rotate(10.0f);
                        spinBstep++;
                    }
                    else
                    {
                        spriteB.move(sf::Vector2f(0,-Bpsp));
                        spriteswitchB.move(sf::Vector2f(0,-Bpsp));
                        spriteredirectB.move(sf::Vector2f(0,-Bpsp));
                        spritespinB.move(sf::Vector2f(0,-Bpsp));
                        spriteBB.move(sf::Vector2f(0,-bsp));
                        invistepB++;
                    }
                    break;

                case sf::Keyboard::H:
                    if(spriteB.getPosition().x == 0)
                    {
                        spriteB.move(sf::Vector2f(0,0));
                        spriteswitchB.move(sf::Vector2f(0,0));
                        spriteredirectB.move(sf::Vector2f(0,0));
                        spritespinB.move(sf::Vector2f(0,0));
                    }
                    else if(isredirectApressed == true)
                    {
                        if(spriteB.getPosition().x > 820)
                        {
                            spriteB.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteB.move(sf::Vector2f(Bpsp, 0));
                            redirectBstep++;
                        }
                    }
                    else if(isspinApressed == true)
                    {
                        spriteB.move(sf::Vector2f(0, 0));
                    }
                    else
                    {
                        spriteB.move(sf::Vector2f(-Bpsp,0));
                        spriteswitchB.move(sf::Vector2f(-Bpsp,0));
                        spriteredirectB.move(sf::Vector2f(-Bpsp,0));
                        spritespinB.move(sf::Vector2f(-Bpsp,0));
                        spriteBB.move(sf::Vector2f(-bsp,0));
                        invistepB++;
                    }
                    break;

                case sf::Keyboard::J:
                    if(spriteB.getPosition().y == 840)
                    {
                        spriteB.move(sf::Vector2f(0,0));
                        spriteswitchB.move(sf::Vector2f(0,0));
                        spriteredirectB.move(sf::Vector2f(0,0));
                        spritespinB.move(sf::Vector2f(0,0));
                    }
                    else if(spriteB.getPosition().y == 820)
                    {
                        spriteB.move(sf::Vector2f(0,20));
                        spriteswitchB.move(sf::Vector2f(0,20));
                        spriteredirectB.move(sf::Vector2f(0,20));
                        spritespinB.move(sf::Vector2f(0,20));
                        invistepB++;
                    }
                    else if(isredirectApressed == true)
                    {
                        if(spriteB.getPosition().y < 0)
                        {
                            spriteB.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteB.move(sf::Vector2f(0, -Bpsp));
                            redirectBstep++;
                        }

                    }
                    else if(isspinApressed == true)
                    {
                        spriteB.move(sf::Vector2f(0, 0));
                    }
                    else
                    {
                        spriteB.move(sf::Vector2f(0,Bpsp));
                        spriteswitchB.move(sf::Vector2f(0,Bpsp));
                        spriteredirectB.move(sf::Vector2f(0,Bpsp));
                        spritespinB.move(sf::Vector2f(0,Bpsp));
                        spriteBB.move(sf::Vector2f(0,bsp));
                        invistepB++;
                    }
                    break;

                case sf::Keyboard::K:
                    if(isredirectApressed == true)
                    {
                        if(spriteB.getPosition().x < 0)
                        {
                            spriteB.move(sf::Vector2f(0, 0));
                        }
                        else
                        {
                            spriteB.move(sf::Vector2f(-Bpsp, 0));
                            redirectBstep++;
                        }

                    }
                    else if(spriteB.getPosition().x == 840)
                    {
                        spriteB.move(sf::Vector2f(0,0));
                        spriteswitchB.move(sf::Vector2f(0,0));
                        spriteredirectB.move(sf::Vector2f(0,0));
                        spritespinB.move(sf::Vector2f(0,0));
                    }
                    else if(isspinApressed == true)
                    {
                        spriteB.move(sf::Vector2f(0, 0));
                    }
                    else
                    {
                        spriteB.move(sf::Vector2f(Bpsp,0));
                        spriteswitchB.move(sf::Vector2f(Bpsp,0));
                        spriteredirectB.move(sf::Vector2f(Bpsp,0));
                        spritespinB.move(sf::Vector2f(Bpsp,0));
                        spriteBB.move(sf::Vector2f(bsp,0));
                        invistepB++;
                    }
                    break;

                case sf::Keyboard::O:
                    {
                        if(spriteBB.getPosition().x > 900)
                        {
                            spriteBB.move(sf::Vector2f(0,0));
                        }
                        else
                        {
                            spriteBB.move(sf::Vector2f(40,0));
                        }

                    }
                case sf::Keyboard::I:
                    {
                        if(spriteBB.getPosition().x < 20)
                        {
                            spriteBB.move(sf::Vector2f(0,0));
                        }
                        else
                        {
                            spriteBB.move(sf::Vector2f(-bsp,0));
                        }

                    }
                case sf::Keyboard::P:
                    {
                        if(boxBtnum[0] == 1 && haswitchB == true)
                        {
                            spriteswitch.setPosition(sf::Vector2f(2000,2000));
                            spriteredirect.setPosition(sf::Vector2f(2000,2000));
                            spritespin.setPosition(sf::Vector2f(2000,2000));
                            spriteswitchB.setPosition(sf::Vector2f(2000,2000));
                            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                            spritespinB.setPosition(sf::Vector2f(2000,2000));
                            sf::Vector2f tempPositionplayer = spriteA.getPosition();
                            spriteA.setPosition(spriteB.getPosition());
                            spriteB.setPosition(tempPositionplayer);
                            sf::Vector2f tempPositionboom = spriteBA.getPosition();
                            spriteBA.setPosition(spriteBB.getPosition());
                            spriteBB.setPosition(tempPositionboom);
                            boxAtnum[0] = 0;
                            haswitchB = false;
                            haswitchA = false;
                            haredirectA = false;
                            haspinA = false;

                        }
                        if(boxBtnum[0] == 2 && haredirectB == true)
                        {
                            redirectAstep = 0;
                            isredirectBpressed = true;
                            spriteredirectB.setPosition(sf::Vector2f(2000,2000));
                            boxBtnum[0] = 0;
                            haredirectB = false;
                            boxAtnum[0] = 0;
                            spriteswitch.setPosition(sf::Vector2f(2000,2000));
                            spriteredirect.setPosition(sf::Vector2f(2000,2000));
                            spritespin.setPosition(sf::Vector2f(2000,2000));
                            haswitchA = false;
                            haredirectA = false;
                            haspinA = false;
                        }
                        if(boxBtnum[0] == 3 && haspinB == true)
                        {
                            spinAstep = 0;
                            isspinBpressed = true;
                            haspinB = false;
                            spritespinB.setPosition(sf::Vector2f(2000, 2000));
                            boxBtnum[0] = 0;
                            haswitchA = false;
                            spritespin.setPosition(sf::Vector2f(2000, 2000));
                            haredirectA = false;
                            spriteredirect.setPosition(sf::Vector2f(2000, 2000));
                            haspinA = false;
                            spritespin.setPosition(sf::Vector2f(2000, 2000));
                            boxAtnum[0] = 0;

                        }
                    }







                case sf::Keyboard::Num0:
                    {
                        spriteintro.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }
                case sf::Keyboard::Num1:
                    {
                        spriteintro1.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }
                case sf::Keyboard::Num2:
                    {
                        spriteintro2.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }
                case sf::Keyboard::Num3:
                    {
                        spriteintro3.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }
                case sf::Keyboard::Num4:
                    {
                        spriteintro4.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }
                case sf::Keyboard::Num5:
                    {
                        spriteintro5.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }
                case sf::Keyboard::Num6:
                    {
                        spriteintro6.move(sf::Vector2f(1000, 0));
                        playApoint = 0;
                        playBpoint = 0;
                    }




                }
                break;

            }


        }

        window.clear();

        window.draw(spriteBA);
        window.draw(spriteBB);
        window.draw(spriteadd);
        window.draw(spritebullA);
        window.draw(spritebullB);
        window.draw(spritebox);
        window.draw(spriteA);
        window.draw(spriteB);
        window.draw(spriteswitch);
        window.draw(spriteredirect);
        window.draw(spritespin);
        window.draw(spriteswitchB);
        window.draw(spriteredirectB);
        window.draw(spritespinB);







        window.draw(spriteintro);
        window.draw(spriteintro1);
        window.draw(spriteintro2);
        window.draw(spriteintro3);
        window.draw(spriteintro4);
        window.draw(spriteintro5);
        window.draw(spriteintro6);


        if(playApoint == 10)
        {
            window.draw(spriteAwin);
        }
        if(playBpoint == 10)
        {
            window.draw(spriteBwin);
        }


        window.display();
    }


    return 0;
}
