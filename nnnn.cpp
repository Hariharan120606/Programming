#include <iostream>
#include <vector>
#include <string>

template <typename T>
class ProductReviewSystem {
private:
    std::vector<std::pair<std::string, T > > productReviews;

public:
    void addReview(const std::string& productName, const T& rating, const T& salesPercentage) {
        productReviews.push_back(std::make_pair(productName, rating));
        productReviews.push_back(std::make_pair(productName, salesPercentage));
    }

    void productReview(const T& queryValue, const std::string& queryType) {
        for (size_t i = 0; i < productReviews.size(); ++i) {
            if (queryType == "rating" && productReviews[i].second == queryValue) {
                std::cout << "Product Name: " << productReviews[i].first << ", Position in Store: " << i << std::endl;
            }
            else if (queryType == "salesPercentage" && productReviews[i].second == queryValue) {
                std::cout << "Product Name: " << productReviews[i].first << ", Position in Store: " << i << std::endl;
            }
        }
    }
};

int main() {
    ProductReviewSystem<int> reviewSystem;
    reviewSystem.addReview("Product A", 8, 70);
    reviewSystem.addReview("Product B", 9, 80);
    reviewSystem.addReview("Product C", 7, 60);

    reviewSystem.productReview(9, "rating");
    reviewSystem.productReview(60, "salesPercentage");

    return 0;
}

