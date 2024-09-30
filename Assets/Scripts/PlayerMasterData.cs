using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
// ���F�v���C���[�̌Œ�f�[�^�������ɏW�񂵂Ă݂�
// �Œ�f�[�^ �� �v���C���ɕϓ����Ȃ��f�[�^
// �����ȃf�[�^�ށE�R���|�[�l���g�n��@�\�ނ͊܂߂Ȃ�
public class PlayerMasterData : ScriptableObject {

    [Header("�o�����X����")]
    [Header("�v���C���[�̃W�����v��")]
    [SerializeField] public float jumpPower = 1f;

    [Header("�A�C�e���̃X�R�A�i�J�����[�j")]
    [SerializeField] public float itemCalory = 41f;
    [Header("�J�����[�̃I�t�Z�b�g")]
    [SerializeField] public float caloryOffset = 0.3f;

    [Header("�����x�Q�[�W�̍ő�l")]
    [SerializeField] public float gaugeMax = 100f;
    [Header("�����x�Q�[�W�̍ŏ��l")]
    [SerializeField] public float gaugeMin = 0f;
    [Header("�����x�Q�[�W�����������邽�߂̓����̒l ���t���[�����Z")]
    [SerializeField] public float gaugeCount;
    [Header("�����̒l�����̒l�ɒB������A")]
    [SerializeField] public int gaugeDecreaseCount = 20;
    [Header("�����x�Q�[�W�����ꂾ����������")]
    [SerializeField] public float gaugeDecreaseValue = 1f;

    [Header("�����x�Q�[�W�̃W�����v�ł̌����l")]
    [SerializeField] public float gaugeDecreaseValue_Jump = 0.3f;
    [Header("�����x�Q�[�W�̉񕜗�")]
    [SerializeField] public float gaugeHealValue = 10f;
    [Header("�����x�Q�[�W�̃A�C�e���ł̉񕜗ʂ̕␳�l�i�w���j")]
    [SerializeField] public float healValueOffset = 2.0f;


    [Space]

    [Header("���o����")]
    [Header("SE�̉���")]
    [SerializeField] public float SEVolume = 0.1f;

    [Header("���s���̉E�ւ̉����x")]
    [SerializeField] public float fallSpeed = 1f;
    [Header("���s���̉E�ւ̉�]���x�i���Ȃ玞�v���j")]
    [SerializeField] public float rotateSpeed = -1f;

    [Header("�W�����v���p�[�e�B�N���̐����ʒu�̃I�t�Z�b�g")]
    [SerializeField] public Vector3 particleOffset = new Vector3(0, 0, 0);

    [Header("�������̊g�傷�鑬��")]
    [SerializeField] public float growthRate = 0.1f;
    [Header("�������̍ő�T�C�Y")]
    [SerializeField] public float maxScale = 2.5f;
    [Header("�������̈Â��Ȃ鑬�x")]
    [SerializeField] public float darkeningRate = 0.5f;
    [Header("�������̍ŏ��̖��邳")]
    [SerializeField] public float minBrightness = 0.2f;

    [Header("�N���A���̏k���ɂ����鎞�ԁi�b�j")]
    [SerializeField] public float shrinkDuration = 4f; // �k���ɂ����鎞�ԁi�b�j
    [Header("�N���A���̍ŏ��T�C�Y")]
    [SerializeField] public float minSize = 0f;
    [Header("�N���A���̉�]���x�i���Ȃ玞�v���j")]
    [SerializeField] public float currentRotationSpeed = 360f; //�N���A���̉�]���x

    [Header("�S�[����̈ړ��ʒu���|�[�^���̈ʒu")]
    [SerializeField] public Vector2 finalPosition = new Vector2(0, 0);
    [Header("�S�[����̍ŏ����x")]
    [SerializeField] public float minSpeed = 0.01f;
    [Header("�v���C���[�̉����x�i����������̂ŕ��̒l������j")]
    [SerializeField] public float deceleration = 0.5f;

}
