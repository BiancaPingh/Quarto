import <iostream>;
import piece;

int main()
{
	using Quarto::Piece;
	Piece piece{ Piece::Color::DARK, Piece::Height::TALL, Piece::Shape::SQUARE, Piece::Body::HOLLOW }; //acolade
	std::cout << piece << '\n';
}

