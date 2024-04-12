import 'package:get/get.dart';
import 'package:Bossa/model/offer_model.dart';
import 'package:Bossa/network/api.dart';

class VoucherController extends GetxController {
  RxBool isLoading = true.obs;

  Rx<Offers> offers = Offers(offers: []).obs;

  @override
  void onInit() async {
    // TODO: implement onInit

    super.onInit();
    _loadOffers();
  }

  Future<void> _loadOffers() async {
    offers.value = await Api.getRewardsList();
    isLoading.value = false;
    update();
  }
}
