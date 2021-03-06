#ifndef OCV_CBIR_F2D_DETECTOR_H
#define OCV_CBIR_F2D_DETECTOR_H

#include <opencv2/core.hpp>
#include <opencv2/features2d.hpp>

#include <vector>

/*!
 *  \addtogroup ocv
 *  @{
 */
namespace ocv{

/*!
 *  \addtogroup cbir
 *  @{
 */
namespace cbir{

class f2d_detector
{
public:
    using result_type =
    std::pair<std::vector<cv::KeyPoint>, cv::Mat>;

    explicit f2d_detector(cv::Ptr<cv::FeatureDetector> detector,
                          cv::Ptr<cv::DescriptorExtractor> extractor);

    void get_descriptor(cv::Mat const &input,
                        result_type &output);

    result_type get_descriptor(cv::Mat const &input);

private:
    cv::Ptr<cv::FeatureDetector> detector_;
    cv::Ptr<cv::DescriptorExtractor> extractor_;
};

} /*! @} End of Doxygen Groups*/

} /*! @} End of Doxygen Groups*/

#endif // OCV_CBIR_F2D_DETECTOR_H
